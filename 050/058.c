// #include <cstdio>
// long long gcd(long long x, long long y){
// 	if (y == 0) return x;
// 	else return gcd(y, x%y);
// }
// long long lcm(long long x, long long y){
// 	return x / gcd(x, y) *y;
// }
// long long a[100], b[100];
// int main(){
// 	int n;
// 	scanf("%d", &n);
// 	for (int i = 0; i < n; i++){
// 		scanf("%lld/%lld", &a[i], &b[i]);
// 	}
// 	long long deno = 1, nume = 0;
// 	for (int i = 0; i < n; i++)
// 		deno = lcm(deno, b[i]);
// 	for (int i = 0; i < n; i++)
// 		nume += deno / b[i] * a[i];
// 	long long pre = nume / deno;
// 	nume = nume - pre*deno;
// 	long long t = gcd(nume, deno);
// 	nume = nume / t;
// 	deno = deno / t;
// 	if (pre == 0 && nume == 0)
// 		printf("0\n");
// 	else if (pre != 0 && nume == 0)
// 		printf("%lld\n", pre);
// 	else if (pre == 0 && nume != 0)
// 		printf("%lld/%lld\n", nume, deno);
// 	else 
// 		printf("%lld %lld/%lld\n", pre, nume, deno);
// 	return 0;
// }

#include <iostream>

#include <cstdlib>

using namespace std;

long long gcd(long long a, long long b) {return b == 0 ? abs(a) : gcd(b, a % b);}

int main() {

    long long n, a, b, suma = 0, sumb = 1, gcdvalue;

    scanf("%lld", &n);

    for(int i = 0; i < n; i++) {

        scanf("%lld/%lld", &a, &b);

        gcdvalue = gcd(a, b);

        a = a / gcdvalue;

        b = b / gcdvalue;

        suma = a * sumb + suma * b;

        sumb = b * sumb;

        gcdvalue = gcd(suma, sumb);

        sumb = sumb / gcdvalue;

        suma = suma / gcdvalue;

    }

    long long integer = suma / sumb;

    suma = suma - (sumb * integer);

    if(integer != 0) {

        printf("%lld", integer);

        if(suma != 0) printf(" ");

    }

    if(suma != 0)

        printf("%lld/%lld", suma, sumb);

    if(integer == 0 && suma == 0)

        printf("0");

    return 0;

}

// #include<stdio.h>long gcd(long a,long b){return !b?a:gcd(b,a%b);}
// int main (){
//     //the shorter,the better.    
//     int n,i,f;long a,b,c,d,t;   
//      for(;~scanf("%d",&n);a%b?a>b?printf("%ld %ld/%ld\n",f*a/b,a-a/b*b,b):printf("%ld/%ld\n",f*a,b):printf("%ld\n",f*a/b)){       
//          for (a=i=0,b=1;i<n&&~scanf("%ld/%ld",&c,&d);a=a*d+b*c,b*=d,i++);       
//          b>0?:(b*=-1,a*=-1),f=a>0?1:-1,a*=f,t=gcd(a,b),a/=t,b/=t;    }}
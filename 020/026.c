#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	printf("1");
	for (int i = 2; i <= a; i++){
		if (a%i == 0){
			printf("*%d", i);
			a = a / i;
			i--;
		}
    }
}
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    
            int N,i;    float a,b,C,S;    
            //printf ("请输入所需前N项和");    
            scanf("%d",&N);   
             S=0;    i=1;    a=1;    b=2;   
              while(i<=N)    {   
                       S=S+b/a;        C=a+b;        a=b;        b=C;        i=i+1;   
                         } 
                 printf("%0.4f",S);  
                 


    //It is base code,under this
    //check your code, you always forget "&"!
    //system("pause");
    return 0;
}



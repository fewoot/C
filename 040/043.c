#include<stdio.h>
double fun(int a[],int n,int *max,int *min)
{int i,s;
    *max=*min=s=a[0];
    for(i=1;i<n;i++)
        {if(a[i]>*max)*max=a[i];
        if(a[i]<*min)*min=a[i];
        s+=a[i];
   }
    return (float)s/n;  
}

int main()
    {int n,max,min,i,a[100];
    float av;
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
    scanf("%d,",&a[i]);
    scanf("%d",&a[i]);
    av=fun(a,n,&max,&min);
    printf("%d\n%d\n%f\n",max,min,av);
    return 0;
}
#include <stdio.h>
 main()
{ int ack(int m,int n);
  int m,n;
 printf("请输入m和n:\n");
 scanf("%d,%d",&m,&n);
 printf("ack(%d,%d)=%d\n",m,n,ack(m,n));
}
int ack(m,n)
{if(m==0)
 return(n+1);
else
if(n==0)
return(ack(m-1,1));
else
return(ack(m-1,ack(m,n-1)));
}
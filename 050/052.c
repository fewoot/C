#include <stdio.h>

int Binserach(int *a,int n,int key){
    if(key>=1 && key<=15){
        return (key-1);
    }
    return (-1);
}

int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    //scanf("",&);
    //gets();
    //fflush(stdin);
    int n=15;
    int key;
    scanf("%d",&key);
    printf("%d",Binserach(&a,n,key));


    //It is base code,under this
    //check your code, you always forget "&"!
    system("pause");
    return 0;
}
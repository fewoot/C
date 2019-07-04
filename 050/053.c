#include <stdio.h>

void bubblesort(int *a,int n){
    int temp=1;
    int b;
    while(temp!=0){
        temp = 0;
        for(int i=0;i<9;++i){
            if(a[i]>a[(i+1)]){
                b = a[(i+1)];
                a[(i+1)] = a[i];
                a[i] = b;
                temp++;
            }
        }
    }
}

void selectsort(int *a,int n){
    int temp=1;
    int b;
    while(temp!=0){
        temp = 0;
        for(int i=0;i<9;++i){
            if(a[i]<a[(i+1)]){
                b = a[(i+1)];
                a[(i+1)] = a[i];
                a[i] = b;
                temp++;
            }
        }
    }
}

int main()
{
    int a[10];
    for(int i=0;i<=9;++i){
        scanf("%d",&a[i]);
    }
    //gets();
    //fflush(stdin);
    bubblesort(&a,10);
    printf("%d",a[0]);
    for(int i=1;i<=9;++i){
        printf(" %d",a[i]);
    }
    printf("\n");
    selectsort(&a,10);
    printf("%d",a[0]);
    for(int i=1;i<=9;++i){
        printf(" %d",a[i]);
    }


    //It is base code,under this
    //check your code, you always forget "&"!
    system("pause");
    return 0;
}
#include <stdio.h>

int main()
{
    int i,max;
    char a[100];
    for(i=0;a[(i-1)]!='\n';i++){
    scanf("%c",&a[i]);
    //printf("%c\n",a[i]);
    max = (i-1);
    }
    //printf("%d\n",max);
    int daxie=0,xiaoxie=0,shuzi=0,qita=0,zong=0;
    for(i=0;i<=max;i++){
        if(a[i]<='Z'&&a[i]>='A'){
            daxie++;
        }else if(a[i]<='z'&&a[i]>='a'){
            xiaoxie++;
        }else if(a[i]<='9'&&a[i]>='0'){
            shuzi++;
        }else{
            qita++;
        }
    }
    zong = daxie+xiaoxie+shuzi+qita;
    printf("%d %d %d %d %d",daxie,xiaoxie,shuzi,qita,zong);


    //It is base code,under this
    //check your code, you always forget "&"!
    system("pause");
    return 0;
}
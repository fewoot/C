#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int function(float v,float d){
    int temp=1;
    int tim=0;
    for(;;temp++){
        for(int i=0;i<temp;++i){
            v = v-d;
            tim++;
            if(v<0){
                return tim;
            }
        }
        tim++;
    }
}

int main()
{
    float v,d;
    scanf("%f %f",&d,&v);
    //gets();
    //fflush(stdin);
    int tim;
    tim = function(v,d);
    printf("%d",tim);
    //It is base code,under this
    //check your code, you always forget "&"!
    system("pause");
    return 0;
}



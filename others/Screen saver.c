#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    //show_screen();
    // printf("");
    // printf("");
    // printf("");
    // printf("");
    // printf("");
    // printf("");
    // printf("");
    // printf("");
    // printf("");
    // printf("");
    // printf("");
    // printf("");
    // printf("");
    // printf("");
    // printf("");


    //It is base code,under this
    //check your code, you always forget "&"!
    //system("pause");
    return 0;
}

void qianqi(){
    // printf("what the fuck?");
    // system("pause");
    // system("cls");
    // system("pause");
    //scanf("",&);
    //gets();
    //fflush(stdin);
    printf("System in boot  ");
    Sleep(1000);
    printf(".");
    Sleep(1000);
    printf(".\n");
    Sleep(1000);
    printf("System boot complete\n");
    Sleep(500);
    printf("System version: v2.3422\n");
    printf("System support: F-W-T v1.3342   @Ewit: OK   @Thihtu: FAILED\n");
    printf("System status:\n");
    Sleep(400);
    printf("Starting Check: OK\n");
    Sleep(300);
    printf("Passive Check:  OK\n");
    Sleep(200);
    printf("Servo Library:  OK\n");
    Sleep(600);
    printf("Scan Serve:     FAILED\n");
    Sleep(300);
    printf("Security Blockade Protection: OK\n");
    printf("Encryption services: OK\n");
    Sleep(400);

    printf("In network connection  ");
    Sleep(1000);
    printf(".");
    Sleep(1000);
    printf(".");
    Sleep(1000);
    printf(".");
    Sleep(1000);
    printf(".");
    Sleep(1000);
    printf(".\n");
    Sleep(1000);
    printf("The network is connected\n");
    system("pause");
    //scanf("");
    show();
    system("pause");
}

void show(){
    for(int i=0;i<600;++i){
        printf("%d %d %d %d %d %d %d %d %d %d %d %d\n",(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9));
        Sleep(50);
    }
}

void show_screen(){
    for(int i=0;i<600;++i){
        printf("%d %d %d %d %d %d %d ",(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9));
        printf("%d %d %d %d %d %d %d %d %d %d %d %d ",(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9));
        printf("%d %d %d %d %d %d %d %d %d %d %d %d ",(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9));
        printf("%d %d %d %d %d %d %d %d %d %d %d %d ",(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9));
        printf("%d %d %d %d %d %d %d %d %d %d %d %d ",(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9));
        printf("%d %d %d %d %d %d %d %d %d %d %d %d ",(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9));
        printf("%d %d %d %d %d %d %d %d %d %d %d %d\n",(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9),(rand()%9));
        Sleep(10);
        if(i>300){
            system("cls");
            i = 0;
        }
    }
}

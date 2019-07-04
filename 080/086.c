#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void daxie_zhuan_xiaoxie_function(int length,char shuru[]);  
int main()
{
    char a1[100];
    char a2[100];
    char a3[100];
    char a4[100];
    char a5[100];
    int l1,l2,l3,l4,l5;
    gets(a1);
    gets(a2);
    gets(a3);
    gets(a4);
    gets(a5);
    

    
    l1 = strlen(a1);
    l2 = strlen(a2);
    l3 = strlen(a3);
    l4 = strlen(a4);
    l5 = strlen(a5);
    daxie_zhuan_xiaoxie_function(l1,a1);
    daxie_zhuan_xiaoxie_function(l2,a2);
    daxie_zhuan_xiaoxie_function(l3,a3);
    daxie_zhuan_xiaoxie_function(l4,a4);
    daxie_zhuan_xiaoxie_function(l5,a5);
    char min[100],max[100];
    strcpy(min,a1);
    strcpy(max,a1);
    int lm,lmax;
    lm = strlen(min);
    lmax = strlen(max);
    
    for(int i=0;i<lm && i<l2;++i){
        if(a2[i]<min[i]){
            strcpy(min,a2);
            lm = strlen(min);
            break;
        }else if(a2[i]==min[i]){

        }else{
            break;
        }
    }
    for(int i=0;i<lm && i<l3;++i){
        if(a3[i]<min[i]){
            strcpy(min,a3);
            lm = strlen(min);
            break;
        }else if(a3[i]==min[i]){

        }else{
            break;
        }
    }
    for(int i=0;i<lm && i<l4;++i){
        if(a4[i]<min[i]){
            strcpy(min,a4);
            lm = strlen(min);
            break;
        }else if(a4[i]==min[i]){

        }else{
            break;
        }
    }
    for(int i=0;i<lm && i<l5;++i){
        if(a5[i]<min[i]){
            strcpy(min,a5);
            lm = strlen(min);
            break;
        }else if(a5[i]==min[i]){

        }else{
            break;
        }
    }
    for(int i=0;i<lmax && i<l2;++i){
        if(a2[i]>max[i]){
            strcpy(max,a2);
            lmax = strlen(max);
            break;
        }else if(a2[i]==max[i]){

        }else{
            break;
        }
    }
    for(int i=0;i<lmax && i<l3;++i){
        if(a3[i]>max[i]){
            strcpy(max,a3);
            lmax = strlen(max);
            break;
        }else if(a3[i]==max[i]){

        }else{
            break;
        }
    }
    for(int i=0;i<lmax && i<l4;++i){
        if(a4[i]>max[i]){
            strcpy(max,a4);
            lmax = strlen(max);
            break;
        }else if(a4[i]==max[i]){

        }else{
            break;
        }
    }
    for(int i=0;i<lmax && i<l5;++i){
        if(a5[i]>max[i]){
            strcpy(max,a5);
            lmax = strlen(max);
            break;
        }else if(a5[i]==max[i]){

        }else{
            break;
        }
    }
    printf("max:");
    puts(max);
    printf("min:");
    puts(min);
    




    //scanf("",&);
    //gets();
    //fflush(stdin);


    //It is base code,under this
    //check your code, you always forget "&"!
    //system("pause");
    return 0;
}
void daxie_zhuan_xiaoxie_function(int length,char shuru[]){
    for(int i=0;i<length;++i){
        if(shuru[i]<='Z' && shuru[i]>='A'){
            shuru[i] = (shuru[i]-'A')+'a';
        }
    }
}


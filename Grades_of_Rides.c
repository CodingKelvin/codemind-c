#include<stdio.h>
int main(){
    int hf,sf,sfr;
    scanf("%d%d%d",&hf,&sf,&sfr);
    if(hf>50 && sf>60 && sfr>100){
        printf("%d",10);
    }
    else if(hf>50 && sf>60){
        printf("%d",9);
    }
    else if(sf>60 && sfr>100){
        printf("%d",8);
    }
    else if(hf>50 && sfr>100){
        printf("%d",7);
    }
    else if(hf>50 || sf>60  || sfr>100){
        printf("%d",6);
    }
    else{
        printf("%d",5);
    }
}
#include<stdio.h>
int main(){
    int X,Y,M=0;
    scanf("%d%d",&X,&Y);
    if(X-Y<0){
        while(X>0){
            X-=1;
            M+=1;
        }
    }
    else{
       
    while(X>0){
        X-=Y;
        M+=1;
        if(X-Y<0){
            while(X>0){
            X-=1;  
            M+=1;
            }
            
        }
    } 
    }
    printf("%d",M);
    
}
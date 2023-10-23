#include<stdio.h>
int main(){
    int X,Y,W,Z;
    scanf("%d%d%d%d", &W,&X,&Y,&Z);
    
    if(X+Y==W || X+Z==W || Y+Z==W || X+Y+Z==W){
        printf("YES");
    }
    else if(X==W || Z==W || Y==W){
        printf("YES");
    }
     
    else{
        printf("NO");
    }
}
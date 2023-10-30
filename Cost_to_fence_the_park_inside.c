#include<stdio.h>
int main(){
    int l,b,w,c;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    
    if(w*2<l && w*2<b){
    
        printf("%d",((l*b)-((l-w-w)*(b-w-w)))*c);
    }
    else{
            printf("Impossible");
    }
}
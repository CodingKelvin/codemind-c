#include<stdio.h>
int main(){
    int N,noH;
    //noH----Number of handshakes;
    scanf("%d",&N);
    noH=0.5*(N*(N-1));
    printf("%d",noH);
}
#include<stdio.h>
#include<math.h>
int main(){
    int N,i,as=0,d=0,ns,t;
    scanf("%d",&N);
    ns=N;
    while(N){
        N/=10;
        d++;
    }
    N=ns;
    while(N){
        t=N%10;
        as+=pow(t,d);
        d-=1;
        N/=10;
        
    }
    

    as==ns ? printf("True") : printf("False");
}
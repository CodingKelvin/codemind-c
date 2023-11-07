#include<stdio.h>
int main(){
    int N,i,j,mpc=0;
    //mpc---magic pair count initially set to 0
    scanf("%d",&N);
    /*
    Iterate to compare each number in the range with other numbers
    */
    for(i=1;i<=N;i++){// N is also included
        for(j=1;j<=N;j++){
    // if i+j is odd then increment magic pair count;
    // each number will be compared with all other numbers
         (i+j)%2!=0 ?  mpc+=1 : mpc=mpc;
        }
    }
    printf("%d",mpc);
}
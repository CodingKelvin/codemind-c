#include<stdio.h>
int main(){
    int L,B,W,C,FA,CTF;
    /*
    FA-----Area of the fence
    >>>>>>>(B*L)-((B-W-W)*(L-W-W))
    CTF----cost to fence
    >>>>>>>>FA*C
    */
    scanf("%d%d%d%d",&L,&B,&W,&C);
    FA=(B*L)-((B-W-W)*(L-W-W));
    CTF=FA*C;
   
        2*W<L && 2*W<B ?  printf("%d",CTF) : printf("Impossible"); 
}
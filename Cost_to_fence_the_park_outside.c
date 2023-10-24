#include<stdio.h>
int main(){
    int L,B,W,C,FA,FC;
    /*
    FA-----AREA OF FENCE
    >>> AREA OF OUTER RECTANGLE LESS AREA OF INNER RECTANGLE
    >>>((L+W+W)*(B+W+W))-(L*B)
    FC------COST OF FENCING
    >>> AREA OF FENCE X COST PER SQUARE METRE
    >>> FA  X C
    */
scanf("%d%d%d%d",&L,&B,&W,&C);
    FA=((L+W+W)*(B+W+W))-(L*B);
    FC=FA*C;
    printf("%d",FC);
    
}

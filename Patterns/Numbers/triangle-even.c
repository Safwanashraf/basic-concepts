#include<stdio.h>

void main ()
{
    int n=5;
    // printf("Enter the number of rows need:- ");
    // scanf("%d",&n);
    for (int i=1; i<=n; i++){
        for (int j=2; j<=i*2; j+=2){
            printf("%d ",j);
        }
        printf("\n");
    }
}
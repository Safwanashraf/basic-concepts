#include<stdio.h>

void main ()
{
    int n=5;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i*2; j+=2){
            printf("%d ", j);
        }
        printf("\n");
    }
}
#include<stdio.h>

void main ()
{
    int n=5;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            for (int k=1; k<=i; k++){
                printf("%c ", 64+k);
            }
        }
        printf("\n");
    }
}
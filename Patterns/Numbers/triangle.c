#include<stdio.h>

void main ()
{
    int n=5, count=1;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            printf("%c ", 64 + count);
            count++;
        }
        printf("\n");
    }
}
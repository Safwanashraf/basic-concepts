#include<stdio.h>

void main ()
{
    int n,count=1;
    printf("Enter the number of rows you need:- ");
    scanf("%d",&n);
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }
}
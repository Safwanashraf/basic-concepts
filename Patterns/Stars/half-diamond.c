#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows you need:- ");
    scanf("%d",&n);
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n-i; j++){
            printf("  ");
        }
    for (int k=1; k<=2*i-1; k++){
        printf("* ");
    }
        printf("\n");
    }
}
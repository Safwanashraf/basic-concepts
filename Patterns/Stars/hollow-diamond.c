#include<stdio.h>
int main()
{
    int n=9;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=1*(n-i); j++){
            printf("  ");
        }
        if(i==n+1/2){
            for (int k=1; k<=i; k++){
                printf("* ");
            }
        }else{
            for (int k=1; k<=n-i; k++){
                printf("* ");
            }
        }
    }
}

// I need to work on this problem

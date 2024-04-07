#include<stdio.h>

int main ()
{
    int n=7;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=(n-i)+1; j++){
            printf("* ");
        }

        for (int k=1; k<=2*(i-1); k++){
        if(i==7){
            printf("C I P H E R _ S W I F T ");
            break;
        }else{
            printf("  ");
        }
        }

        for (int l=1; l<=(n-i)+1; l++){
            printf("* ");
        }
        printf("\n");
    }

    for (int i=1; i<=n-1; i++){
        for (int j=1; j<=i+1; j++){
            printf("* ");
        }
        for (int k=1; k<=2*(n-(i+1)); k++){
            printf("  ");
        }
        for (int l=1; l<=i+1; l++){
            printf("* ");
        }
        printf("\n");
    }
}
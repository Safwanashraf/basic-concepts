#include <stdio.h>

int main() {
    int rows = 5, count;

    for (int i = 1; i <= rows; i++) {
        count = 0;
        for (int num = 2; count < i; num++) {
            int isPrime = 1; // Assume num is prime initially
            for (int j = 2; j * j <= num; j++) {
                if (num % j == 0) {
                    isPrime = 0; // If num is divisible by any j, it's not prime
                    break;
                }
            }
            if (isPrime) {
                printf("%d ", num);
                count++;
            }
        }
        printf("\n");
    }

    return 0;
}

// 3-Write a c program to check prime number.

// prime number

#include <stdio.h>

int main() {
    int num, i, isPrime = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    for (i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime)
        printf("%d is a prime number.", num);
    else
        printf("%d is not a prime number.", num);
    return 0;
}

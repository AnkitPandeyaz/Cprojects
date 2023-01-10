// 2-Write a c program to print fibonacci series without using recursion and using recursion.

#include <stdio.h>

int main() {
    int terms, first = 0, second = 1, next, c;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);
    printf("Fibonacci series: ");
    for (c = 0; c < terms; c++) {
        if (c <= 1) {
            next = c;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d, ", next);
    }
    return 0;
}

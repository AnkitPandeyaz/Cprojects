// 7. Write a c program to swap two numbers without using third variable. Input: a=10 b=20 Output: a=20 b=10

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Before swapping: a = %d and b = %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping: a = %d and b = %d", a, b);
    return 0;
}

// 6. Write a c program to reverse given number..
//  Input: 123 
//  Output: 321


#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    printf("Reversed number: %d", reversedNum);
    return 0;
}

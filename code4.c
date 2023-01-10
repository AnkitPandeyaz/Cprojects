// 4. Write a c program to check palindrome number.

#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, remainder;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    originalNum = num;
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    if (originalNum == reversedNum)
        printf("%d is a palindrome number.", originalNum);
    else
        printf("%d is not a palindrome number.", originalNum);
    return 0;
}

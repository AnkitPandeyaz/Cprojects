// 5. Write a c program to check armstrong number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, digits, result = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    originalNum = num;
    digits = (int)log10(num) + 1;
    while (num != 0) {
        remainder = num % 10;
        result += pow(remainder, digits);
        num /= 10;
    }
    if (originalNum == result)
        printf("%d is an Armstrong number.", originalNum);
    else
        printf("%d is not an Armstrong number.", originalNum);
    return 0;
}

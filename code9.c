// 9. Write a c program to convert decimal number to binary. Input: 5 Output: 101 Input: 20 Output: 10100


#include <stdio.h>

void decimalToBinary(int n) {
    int binaryNum[32];
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
    printf("\n");
}

int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    printf("Binary equivalent of %d is: ", decimal);
    decimalToBinary(decimal);

    return 0;
}

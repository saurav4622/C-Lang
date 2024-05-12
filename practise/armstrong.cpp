#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, lastDigit, digits, sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;

    // Count the number of digits
    digits = (int)log10(num) + 1;

    // Check if the number is negative
    if (num < 0) {
        printf("Invalid input, number should be non-negative.\n");
        return 1;
    }

    // Iterate over each digit
    while (num > 0) {
        lastDigit = num % 10;
        sum += pow(lastDigit, digits);
        num /= 10;
    }

    // Check if the original number is equal to the sum
    if (originalNum == sum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

    return 0;
}


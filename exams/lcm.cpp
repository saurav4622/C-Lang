#include <stdio.h>

int main() {
    int a, b, temp, lcm, hcf;

    // Read in the two integers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Make sure a is the larger number
    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }

    // Calculate the LCM and GCD
    for (int i = 1; i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }
    lcm = (a * b) / hcf;

    // Print the results
    printf("LCM: %d\n", lcm);
    printf("GCD: %d\n", hcf);

    return 0;
}

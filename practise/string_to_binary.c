#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void string_to_binary(char *str)
{
    int i, j, len, val;
    len = strlen(str);

    for (i = 0; i < len; i++) {
        val = str[i];

        for (j = 7; j >= 0; j--) {
            if (val & (1 << j)) {
                printf("1");
            } else {
                printf("0");
            }
        }
        printf(" ");
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0'; // remove newline character from input

    printf("Binary representation: ");
    string_to_binary(str);

    return 0;
}

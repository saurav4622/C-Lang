#include<stdio.h>
#include<stdlib.h>

void main()
{
    int f[50], i, st, len, j, k, count = 0;
    
    for(i = 0; i < 50; i++)
    {
        f[i] = 0;
    }
    
    printf("Files allocated are: \n");
    
x:  count = 0;
    printf("Files start and length allocated are: \n");
    scanf("%d%d", &st, &len);

    for(k = st; k < (st + len) && k < 50; k++) {
        printf("\nk=%d", k);
        if(f[k] == 0) {
            count++;
        }
        printf("\nk=%d", k);
    }

    if (len == count) {
        printf("\nLen = %d\n", len);
    }

    for(j = st; j < (st + len) && j < 50; j++) {
        printf("\nj=%d\n", j);
        if(f[j] == 0) {
            f[j] = 1;
            printf("%d\t%d\n", j, f[j]);
        }
    }

    if(j != (st + len - 1)) {
        printf("\nj=%d\n", j);
        printf("Files Allocated disks:\n");
    } else {
        printf("Files Allocated not: \n");
    }

    printf("Do you want to enter more file(Yes - 1/No - 0)");
    scanf("%d", &count);

    if (count == 1)
        goto x;
    else
        exit(0);
}

#include <stdio.h>
#include <stdlib.h>

// Function to calculate prim factors
void factorize(int num) {
    printf("%d: {", num);
    int divisor = 2;
    int count = 0;
    if (num == 0 || num == 1) {
        printf("{%d, %d}", num, 1);
    }
    while (num > 0)
    {
        if (num % divisor == 0) {
            num = num / divisor;
            count++;
        } else {
            if (count > 0) {
                printf("{%d, %d}", divisor, count);
                if (num > 1) {
                    printf(",");
                }
                count = 0;
            }
            divisor++;
        }
    }
    printf("}\n");
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Please enter at least one positive integer as an argument.\n");
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        int num = atoi(argv[i]);
        if (num < 0) {
            printf("Error: The number %d is not positiv and will be skipped.\n", num);
            continue;
        }
        factorize(num);
    }
    return 0;
}
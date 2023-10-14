#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
    int min, max;
    min = max = 0;

    for(int i = 1; i < argc; i++) {
	    int val = atoi(argv[i]);
        if (val > min) {
            min = val;
        }
        if (val < max) {
            max = val;
        }
    }

	printf("Maximum = %i\n", max);
    printf("Minimum = %i\n", min);
	return 0;

}
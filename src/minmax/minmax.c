#include <stdio.h>
#include <stdlib.h>

// int main() {}
int main(int argc, char * argv[]) {

    

	// argc: Anzahl der Parameter
	// argc >= 1
	// argv: Parameter als Strings
	// argv[0] -> Name des Programs

	//printf("%s\n", argv[0]);
	//printf("\n");
//
	//for(int i = 1; i < argc; i++) {
	//	int val;
	//	int ret = sscanf(argv[i], "%d", &val); // ret = Anzahl an Elementen die sscanf scannen möchte
	//    //int val = atoi(argv[i]);
	//    if(ret == 1) {
	//		//printf("|%7d|", 2 * (val / 2));
	//		printf("|%7d|", val % 2);
	//		printf("\n");
	//	} else {
	//		fprintf(stderr, 
	//				"Error parsing string \"%s\" as integer failed.\n", 
	//				argv[i]);
	//	};
//
//
	//}

	// return 0 (EXIT_SUCCESS) -> program terminated successfully
	// return X (EXIT_FAILURE) -> programm terminated with failure
	
	printf("Hello World!\n");
	return 0;

}
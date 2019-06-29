#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc , char **argv) {
	int input;
	int i;
	int size;
	char *mem;
	if (argc < 2) {
		printf("Usage: ./vuln-int param\nwhere param is a positive number\n");
		exit(1);
	}
	input = atoi(argv[1]);
	if (input > 0 && input <2147483648) {
		size =input * sizeof(char *);
		mem = malloc(size);
		printf("Input is: %d [0x%x]\n",input,input);	
		printf("Reserved memory size is: %d [0x%x]\n",size,size);	
		if (mem != NULL) {
			for (i = 0; i < input; i++) {
				mem[i] = 'A';
			}
			printf("Done!\n");
		} else {
			printf("Failure\n");
			exit(1);
		}
	} else {
		printf("The number should be 0 < n < 2.147.483.647\n");
	}
	return 0;
}

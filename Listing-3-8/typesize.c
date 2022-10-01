// typesize.c -- prints out type sizes
#include <stdio.h>

int main() {

	// c99  providesa %zd specifier for sizes
	printf("\n");
	printf("Type int has a size of %u bytes\n", sizeof(int));
	printf("Type char has a size of %u bytes\n", sizeof(char));
	printf("Type long has a size of %u bytes\n", sizeof(long));
	printf("Type double has a size of %u bytes\n", sizeof(double));
	printf("\n");

	return 0;
}

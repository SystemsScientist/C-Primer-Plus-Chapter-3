// Write a program that asks you to enter an ASCII
// code value, such as 66, and then prints the 
// character having that ASCII code

#include <stdio.h>

int main() {
	
	int ascii_code;

	printf("\nPlease enter an ASCII code value, such as 66: ");
	scanf("%d", &ascii_code);

	printf("The code for %d is %c.\n", ascii_code, ascii_code);

	printf("\n");
	return 0;
}

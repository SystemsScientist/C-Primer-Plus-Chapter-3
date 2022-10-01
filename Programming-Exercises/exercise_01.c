// Find out what your system does with integer overflow
// floating-point overflow, and floating-point underflow 
// by using the experimental approach; that is, write 
// programs having these problems

#include <stdio.h>

int main() {

	short s = 32767; // prints 32536
	short t = 65535; // 65535
	short u = 33000; // -1
	
	int i = 2147483647;
	int j = 4294967295;
	unsigned int k = 4294967295;

	printf("\nOverflow for short\n");
	printf("--------------------------------\n");
	printf("s = %d\n", s); // prints 32767
	printf("s + 1 = %d\n", s + 1); // prints 32768
	printf("s + 2 = %d\n", s + 2); // prints 32769 
	printf("s + 3 = %d\n", s + 3); // prints 32770
	printf("s + 100 = %d\n", s + 100); // prints -1
	printf("u = %d\n", u); // prints -1
	
	// int overflow
	printf("\nOverflow Values for int\n");
	printf("--------------------------------\n");
	printf("i = %d\n", i); // prints 2147483647
	printf("j = %d\n", j); // prints -1
	printf("k = %u\n", k); // prints 4294967295
	
	printf("\n");
	return 0;
}

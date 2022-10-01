
#include <stdio.h>

int main() {

	float float_num = 256.0;
	short short_num = 256.0;
	int int_num = 256.0;
	long long_num = 256.0;
	
	printf("\nValues of Data Types: \n");
	printf("---------------------------\n");
	printf("float_num = %f\n", float_num);
	printf("short_num = %d\n", short_num);
	printf("int_num = %d\n", int_num);
	printf("long_num = %ld\n", long_num);

	printf("\nValues of Data Types: \n");
	printf("--------------------------\n");
	printf("Sizeof float_num = %u bytes\n", sizeof(float_num));
	printf("Sizeof short_num = %u bytes\n", sizeof(short_num));
	printf("Sizeof int_num = %u bytes\n", sizeof(int_num));
	printf("Sizeof long_num = %u bytes\n", sizeof(long_num));
	
	printf("\n");
	return 0;
}

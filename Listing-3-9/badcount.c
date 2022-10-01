// badcount.c -- displays incorrect argument counts
#include <stdio.h>

int main() {

	int f = 4;
	int g = 5;
	float h = 5.0f;

	printf("%d\n", f, g);	   // too many arguments
	printf("%d %d\n", f);	   // too few arugments
	printf("%d %f\n", h, g);   // wrong kind of values

	return 0;
}

// floatingpoint_overflow.c -- displays float overflow
#include <stdio.h>

int main() {

	float toobig = 3.4e38 * 100.0f;

	printf("%e\n", toobig);
}

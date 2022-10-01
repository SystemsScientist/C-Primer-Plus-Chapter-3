// There are approximately 3.156 x 10^7 seconds 
// in a year. Write a program that requests your
// age in years and then displays the equivalent
// number of seconds

#include <stdio.h>

int main() {

	const double years_in_seconds = 3.156e7;
	float age = 0;
	double age_in_seconds = 0;

	printf("How old are you? ");
	scanf("%f", &age);
	
	age_in_seconds = (double) age * years_in_seconds;

	printf("\nYour age in %.2f years is %.2lf seconds.\n", age, age_in_seconds);

	printf("\n");
	return 0;
}

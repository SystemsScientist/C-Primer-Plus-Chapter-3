// There are 2.54 centimeters to the inch. Write
// a program that asks you to enter your height
// in inches and then displays your height in
// centimeters. Or, if you prefer, ask for the
// height in centimeters and convert that to 
// inches

#include <stdio.h>

int main() {

	float cm = 2.54;
	float inch = 0;
	float height_in_cm = 0;

	printf("Enter your height in inches: ");
	scanf("%f", &inch);

	height_in_cm = 2.54 * inch;
	
	printf("Your height in inches is %.2f\n", inch);
	printf("Your height in centimeters is %.2f\n", height_in_cm);

	printf("\n");
	return 0;
}

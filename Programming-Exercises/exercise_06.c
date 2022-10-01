// The mass of a single molecule of water is
// about 3.0 x 10^(-23) grams. A quart of water
// is about 950 grams. Write a program that
// requests an amount of water, in quarts, and
// displays the number of water molecules in 
// that amount

#include <stdio.h>

int main() {

	const double molecule_of_water = 3.0e-23; // molecule of water in grams
	const double quart_of_water = 950.0;	  // quart of water in grams
	double number_of_quarts = 0.0;
	double number_of_water_molecules = 0.0;

	printf("\nEnter the number of quarts of water: ");
	scanf("%f", &number_of_quarts);

	number_of_water_molecules = (number_of_quarts * quart_of_water) / molecule_of_water;	

	printf("The number of water molecules is %lf or %e\n", number_of_water_molecules, number_of_water_molecules);

	printf("\n");
	return 0;
}

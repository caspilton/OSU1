#define _CRT_SECURE_NO_WARNINGS
#include "myfunctions.h"

int main() {
	Fraction x, y, division, multiplication, addition;
	printf("Input A: "); scanf("%d", &x.p);
	printf("Input B: "); scanf("%d", &x.q);
	printf("Input C: "); scanf("%d", &y.p);
	printf("Input D: "); scanf("%d", &y.q);
	division = division_of_fractions(x, y);
	multiplication = multiplication_of_fractions(x, y);
	addition = addition_of_fractions(x, y);
	printf("\nA   C   %d\n— : — = —\nB   D   %d\n", division.p, division.q);
	printf("\nA   C   %d\n— * — = —\nB   D   %d\n", multiplication.p, multiplication.q);
	printf("\nA   C   %d\n— + — = —\nB   D   %d\n", addition.p, addition.q);
}

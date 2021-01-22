#pragma once

#include <stdio.h>

typedef struct Fraction Fraction;

struct Fraction {
	unsigned int p;
	unsigned int q;
};

unsigned int max(unsigned int a, unsigned int b);

unsigned int gcd(unsigned int a, unsigned int b);

Fraction create_fraction(unsigned int p, unsigned int q);

Fraction reduction_of_fraction(Fraction a);

Fraction multiplication_of_fractions(Fraction a, Fraction b);

Fraction division_of_fractions(Fraction a, Fraction b);

Fraction addition_of_fractions(Fraction a, Fraction b);


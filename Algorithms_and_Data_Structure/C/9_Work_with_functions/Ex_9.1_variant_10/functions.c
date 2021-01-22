#include "myfunctions.h"

unsigned int max(unsigned int a, unsigned int b) {
    if (a >= b) return a;
    return b;
}

unsigned int gcd(unsigned int a, unsigned int b) {
    unsigned int temp;
    while (b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

Fraction create_fraction(unsigned int p, unsigned int q) {
    return (Fraction) { p, q };
}

Fraction reduction_of_fraction(Fraction a) {
    unsigned int gcdn = gcd(a.p, a.q);
    return (Fraction) { a.p / gcdn, a.q / gcdn };
}

Fraction multiplication_of_fractions(Fraction a, Fraction b) {
    return reduction_of_fraction(create_fraction(a.p * b.p, a.q * b.q));
}

Fraction division_of_fractions(Fraction a, Fraction b) {
    return multiplication_of_fractions(a, create_fraction(b.q, b.p));
}

Fraction addition_of_fractions(Fraction a, Fraction b) {
    return reduction_of_fraction(create_fraction(a.p * b.q + b.p * a.q, a.q * b.q));
}

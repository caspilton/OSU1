#include <stdio.h>
#include <math.h>

int main(void) {
	const double eps = 10e-3;
  double x;
	printf("Enter x: ");
	scanf("%lf", &x);
  double a_n;
	double a_n_1;
	printf("a[1] = %lf\n", x);

	for (unsigned int i = 2; i < 100 ; i++) {
		a_n = x / (2 * a_n_1 * a_n_1);
    printf("a[%d] = %lf\n", i, a_n);
		if (fabs(a_n - a_n_1) < eps)
			break;
    a_n_1 = a_n;
	}
}

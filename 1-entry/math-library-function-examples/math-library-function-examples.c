#include <stdio.h>
#include <math.h>

int main()
{
	printf("%.2f\n", exp(1));       // exp(x): Calculates e^x
	printf("%.2f\n", exp2(5));      // exp2(x): Calculates 2^x
	printf("%.2f\n", sqrt(49));     // sqrt(x): Square root of x
	printf("%.2f\n", pow(9, 2));    // pow(x, y): x raised to the power y
	printf("%.2f\n", log(3));       // log(x): Natural logarithm (base e) of x
	printf("%.2f\n", cbrt(27));     // cbrt(x): Cube root of x
	printf("%.2f\n", ceil(6.3));    // ceil(x): Rounds x up to the nearest integer
	printf("%.2f\n", floor(6.7));   // floor(x): Rounds x down to the nearest integer
	printf("%.2f\n", fabs(-17));    // fabs(x): Absolute value of x
	printf("%.2f\n", fdim(5, 3));   // fdim(x, y): Returns max(x - y, 0)
	printf("%.2f\n", fma(5, 6, -2));// fma(x, y, z): Computes (x * y) + z accurately
	printf("%.2f\n", fmax(45, 89)); // fmax(x, y): Returns the maximum of x and y
	printf("%.2f\n", fmod(10, 3));  // fmod(x, y): Remainder of x / y (floating-point)
	printf("%.2f\n", hypot(5, 12)); // hypot(x, y): sqrt(x^2 + y^2), computes hypotenuse
	printf("%.2f\n", round(10.2));  // round(x): Rounds x to the nearest integer

	double nanValue = 0.0 / 0.0;
	printf("%.2f\n", isnan(nanValue)); // isnan(x): Checks if x is NaN (Not a Number)
	printf("%.2f\n", signbit(-2.0));   // signbit(x): Checks if x is negative

	return 0;
}

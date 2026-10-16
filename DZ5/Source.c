#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES 
#include <locale.h>
#include <stdio.h>
#include <math.h>


double resultF(double x, double y)
{

    const double a = 7.1e-9;
    double chisl = cos(pow(x, 3) + 6) - sin(y - a);
    double znam = log(pow(x, 4)) - 2 * pow(sin(x), 5);

    return chisl / znam;
}

int main(void) // вариант 18
{
	setlocale(LC_ALL, "RUS");
    double x, y;
    printf("введите x: ");
    scanf("%lf", &x);
    printf("введите y: ");
    scanf("%lf", &y);
    double F = resultF(x, y);
    printf("F = %.6f\n", F);

    return 0;
}
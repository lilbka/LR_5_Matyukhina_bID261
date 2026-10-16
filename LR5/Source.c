#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES 
#include <locale.h>
#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

int main()
{
    setlocale(LC_ALL, "RUS");

    zad1();
    zad2();
    zad3();

    return 0;
}

int zad1(void)
{
    double gr;
    printf("введите угол в градусах: ");
    scanf("%lf", &gr);
    double rad = gr * M_PI / 180.0; // синус работает с радианами, перевод в них
    double s = sin(rad);
    printf("sin(%.0f град) = %.6f\n\n\n", gr, s);
}

int zad2(void) //вариант 5????
{
    const double p = 3.0;
    double x;
    double a, b, y;
    printf("введите x:");
    scanf("%lf", &x);
    a = sqrt(p * x);
    b = p * x * x + sqrt(a);
    y = pow(log(b * b), 3) + a * x;
    printf("x = %.1f\n", x);
    printf("a = %.4f\n", a);
    printf("b = %.4f\n", b);
    printf("y = %.1f\n\n\n", y);
}

int zad3(void)
{
    int a = 2;
    int b = 67;
    int c = 42;
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    // только одно из A и B чётное
    printf("только одно из A и B чётное: условие выполнено при 1 = да, 0 = нет. условие = %d\n", (a % 2) != (b % 2));

    // каждое из трёх чисел кратно трём
    printf("каждое из трёх чисел кратно трём: условие выполнено при 1 = да, 0 = нет. условие = %d\n", (a % 3 == 0) && (b % 3 == 0) && (c % 3 == 0));
}

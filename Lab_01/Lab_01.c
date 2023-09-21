#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	double xTask1, yTask1, a;

	printf("Enter x: ");
	scanf("%lf", &xTask1);

	printf("Enter y: ");
	scanf("%lf", &yTask1);

	a = pow(2, -xTask1) * sqrt(1 / (xTask1 * xTask1 * xTask1 * xTask1) + sqrt(fabs(yTask1)));
	printf("The result is: %lf\n", a);

	double num, max, min;
	int i = 0;

	label1:
	printf("Enter a number: ");
	scanf("%lf", &num);

	if (num <= 0)
	{
		printf("You cannot enter negative numbers, try entering a positive number again please\n");
		goto label1;
	}

	if (i == 0)
	{
		max = num;
		min = num;
	}
	else
	{
		max = num > max ? num : max;
		min = num < min ? num : min;
	}

	if (i < 10)
	{
		i++;
		goto label1;
	}

	printf("(max + min) / 2 = %lf\n", (max + min) / 2);

	int k = 8;
	double xTask3 = -1.83 * k + 0.5, yTask3 = -0.74 * k + 1.0, zTask3 = 1.3 * k + 1.5;

	if (zTask3 == 0 || zTask3 + yTask3 * yTask3 == 0)
		printf("Cannot divide by zero\n");
	else
	{
		double frac1 = (xTask3 - yTask3) / pow(fabs(zTask3), 0.34);
		double frac2 = (yTask3 * yTask3 - zTask3 * zTask3 * zTask3) / (2.1 + zTask3 * zTask3);
		double frac3 = exp(xTask3 - yTask3) / (zTask3 + yTask3 * yTask3);
		double f1 = 1 - frac1 + frac2 - frac3;

		double frac4 = (yTask3 - xTask3 * xTask3) / (zTask3 + yTask3 * yTask3);
		double f2 = pow(log(fabs((yTask3 - pow(xTask3 * xTask3 - f1, 1.0 / 3)) * frac4)), 2.0 / 3);

		printf("Result: %lf\n", f2);
	}

	_getch();
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float a, b, c, x1, x2, delta;
	printf(" Digite os valores de a, b e c:");
	scanf_s("%f %f %f", &a, &b, &c);
	delta = b * b - 4.0f * a * c;
	if (delta < 0)
	{
		printf("Nao possui raizes.\n");
		return 0;
	}
	else
	{
		x1 = (-b + sqrt(delta)) / (2.0f * a);
		x2 = (-b - sqrt(delta)) / (2.0f * a);
		printf("X1 = %.2f\nX2 = %.2f\n", x1, x2);
	}
	system("pause");
	return 0;
}
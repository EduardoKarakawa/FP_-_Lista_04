#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c;
	printf("Digite tres numeros inteiros:");
	scanf_s("%d %d %d", &a, &b, &c);
	if ((a > b) && (a > c)) {
		printf("O marior numero eh %d\n", a);
	}
	else {
		if ((b > a) && (b> c)) {
			printf("O marior numero eh %d\n", b);
		}
		else {
			if ((c > b) && (c > a)) {
				printf("O marior numero eh %d\n", c);
			}
		}
	}
	system("pause");
	return 0;
}
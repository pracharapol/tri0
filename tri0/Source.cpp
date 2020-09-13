#include<stdio.h>
int main() {
	int a, b, c = 0;
	scanf_s("%d", &a);
	while (a > 10) {
		b = a;
		while (b > 10) {
			c += b % 10;
			b = (b - (b % 10)) / 10;
		}
		c += b;
		printf("%d\n", c);
		a = c;
		c = 0;
	}
	return 0;
}
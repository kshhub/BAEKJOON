#include <stdio.h>

int main(void) {
	int a, b;
	int h_b, t_b, o_b;
	scanf("%d%d", &a, &b);
	h_b = b / 100;
	t_b = (b % 100) / 10;
	o_b = b % 10;
	printf("%d\n", a * o_b);
	printf("%d\n", a * t_b);
	printf("%d\n", a * h_b);
	printf("%d\n", a * b);
}

#include <stdio.h>

int main(void) {

	int T;
	int A, B;
	int *p = 0;
	scanf("%d", &T);
	p = (int*)malloc(sizeof(int)*T);

	for (int i = 0; i < T; i++) {
		scanf("%d %d", &A, &B);
		p[i] = A + B;
	}
	for (int j = 0; j < T; j++) {
		printf("%d\n", p[j]);
	}

	free(p);
	return 0;

}

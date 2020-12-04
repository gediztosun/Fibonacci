#include <stdio.h>

int main() {
	int num, a, b, i;
	a = 0;
	b = 1;
	i = 0;

	scanf("%d", &num);

	printf("%d, ", a);
	
	while (i < num-1) {	
		printf("%d, ", b);
		
		b += a;
		a = b - a;

		i++;	
	}

	printf("%d\n", b);

	return 0;
}

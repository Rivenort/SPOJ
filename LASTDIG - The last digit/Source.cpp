#include <stdio.h>


int main() {

	int a, b, n;

	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d %d", &a, &b);
		if (b == 0)
		printf("1\n");
	else {
		switch (b%4) {
		case 1: {
			printf("%d\n", a);
			break;
		} case 2: {
			printf("%d\n",(a*a)%10);
			break;
		} case 3: {
			printf("%d\n",(a*a*a)%10);
			break;
		} case 0: {
			printf("%d\n",(a*a*a*a)%10);
			break;
		}
		}
	}
	}
	

	return 0;
}

#include <stdio.h>
#include <stdlib.h>

void t(int a, int b) {
	int num = a * b;
	if (a == 0 || b == 0) {
		printf("Number can not be 0.\n");
		return;
	}
	while (a > 0 && b > 0) {

		if (a > b)
			a = a % b;
		else
			b = b % a;
	}
	if (a == 0) {
		printf("LCM: %d\n", (num / b));
	}
	else {
		printf("LCM: %d\n", (num / a));
	}
}
int main(void) {
	int a, b;
	int c;
	printf("Enter two integers:");
	scanf_s("%d %d", &a, &b);
	t(a, b);
	return 0;
}
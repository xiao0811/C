#include <stdio.h>

float sum(int n);
int main()
{
	int n;
	scanf("%d", &n);
	printf("%f\n", sum(n));
	return 0;
}

float sum(int n)
{
	int i;
	float totle;
	totle = 0;
	for (i = 1; i <= n; i++) {
		totle += 1.0 / i;
	}
	return totle;
}

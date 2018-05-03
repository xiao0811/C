#include <stdio.h>

int main()
{
	int fahr;
	printf("%4s%8s\n", "fahr", "celsius");
	for (fahr = 0; fahr <= 300; fahr += 20) {
		printf("%4d%8.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
	}
	return 0;
}

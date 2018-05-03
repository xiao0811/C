#include <stdio.h>

int main(int argc, char const *argv[]) {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("%3s%6s\n", "fahr", "celsius");

    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%3.0f%6.1f\n", fahr, celsius);
        fahr += step;
    }
    return 0;
}

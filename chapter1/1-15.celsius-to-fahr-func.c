#include <stdio.h>

/* print Fahrenheit-Celsius table
for f = 0, 20, ..., 300 */

int converter(int celsius);

int main() {
    int lower, upper, step;
    float fahr, celsius;
    lower = 0; /* lower limit of temp table */
    upper = 300; /* and upper limit */
    step = 20; /* step size */

    fahr = lower;

    printf("  °F   °C  \n");
    printf("-----------\n");

    while (celsius <= upper) {
        fahr = converter(celsius);
        printf("%4.0f %6.1f\n", fahr, celsius);
        celsius = celsius + step;
    }
}

int converter(int celsius) {
    return (celsius * 9.0/5.0) + 32.0;
}
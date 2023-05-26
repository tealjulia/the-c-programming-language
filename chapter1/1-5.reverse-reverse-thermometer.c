#include <stdio.h>

/* print Fahrenheit-Celsius table
for f = 0, 20, ..., 300 */

int main() {
    int lower, upper, step;
    float fahr, celsius;
    lower = 0; /* lower limit of temp table */
    upper = 300; /* and upper limit */
    step = 20; /* step size */

    celsius = upper;

    printf("  °C  °F   \n");
    printf("-----------\n");

    while (celsius >= lower) {
        fahr = (celsius * 9.0/5.0) + 32.0;
        
        printf("%4.0f %6.1f\n", celsius, fahr);
        celsius -= step;
    }
}

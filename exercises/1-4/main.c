#include <stdio.h>

/**
 * Print Celsius-Fahrenheit table for celsius = 0, 20 , ..., 300
 */ 
main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    while(fahr <= upper) {
        fahr = (9.0 / 5.0) * celsius + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}

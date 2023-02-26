#include <stdio.h>

void convert_series_fahrenheit_to_celsius() {
    printf("*******Converting fahrenheit to celsius*******\n");

    float lower = 0, upper = 300, step = 20;
    float fahr = lower, celsius;

    /* 
        Denne while-løkken regner ut celsius
        så lenge fahrenheit er under 300
    */

    while(fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f\t%6.1f\t\n", fahr, celsius);
        fahr = fahr + step;
    }
}

void convert_series_celsius_to_fahrenheit()  {
    printf("*******Converting celsius to fahrenheit*******\n");

    float lower = 0, upper = 300/20, step = 1;
    float celsius = lower, fahrenheit;

    while(celsius <= upper) {
        fahrenheit = (celsius - 32.0) / (5.0 / 9.0);
        printf("%3.0f\t%6.1ft\n", fahrenheit, celsius);
        celsius += step;
    }
}

int main() {
    convert_series_celsius_to_fahrenheit();
    convert_series_fahrenheit_to_celsius();
    

    return 0;
}
#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793

// Function table: prints function values over a range
void table(double (*func)(double), double start, double end, double step) {
    double value;
    printf("x\tf(x)\n");
    for(double x = start; x <= end; x += step) {
        value = (*func)(x);   // call the function using pointer
        printf("%.2lf\t%.4lf\n", x, value);
    }
}

// Sample function to use with table
double square(double x) {
    return x * x;
}

int main() {
    printf("Table of square function:\n");
    table(square, 0.0, 2.0, 0.5);

    printf("\nTable of cosine function:\n");
    table(cos, 0.0, PI, 0.5);

    return 0;
}

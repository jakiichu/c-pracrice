#include <stdio.h>
#include <math.h>

double f(double x) {
    return 2 * x - log(x + 2) + pow(x, 3) - 100;
}

int main() {
    double x0 = 4.0;
    double x1 = 4.5;


    double x2;

    int iterations = 0;

    do {
        x2 = x1 - f(x1) * (x1 - x0) / (f(x1) - f(x0));
        x0 = x1;
        x1 = x2;
        iterations++;
    } while (fabs(f(x2)) > 0.0001);

    printf("Root of the equation: %lf\n", x2);
    printf("Number of iterations: %d\n", iterations);

    return 0;
}

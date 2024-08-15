// #include <stdio.h>
// #include <math.h>
//
// double f(double x) {
//     return x / (sin(x) + x * x + 1);
// }
//
// double integral(double a, double b, int n) {
//     double h = (b - a) / n;
//     double sum = 0.0;
//
//     for (int i = 0; i < n; i++) {
//         double x = a + i * h;
//         sum += f(x);
//     }
//
//     return h * sum;
// }
//
// int main() {
//     double a = 1.0, b = 5.0;
//     int n_values[] = {10, 40, 160, 640};
//     int n_count = sizeof(n_values) / sizeof(n_values[0]);
//
//     for (int i = 0; i < n_count; i++) {
//         int n = n_values[i];
//         double result = integral(a, b, n);
//         printf("n = %d, integral = %.6f\n", n, result);
//     }
//
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
//
// double f(double x, double y) {
//     return y * cos(x) - sin(2 * x);
// }
//
// int main() {
//     double a = 0.0;
//     double b = 2.0;
//     double y = 3.0;
//     int n = 50;
//     double h = (b - a) / n; // Шаг
//
//     printf("x\t\tApproximation\n");
//     printf("--------------------------\n");
//
//     for (int i = 0; i <= n; i++) {
//         double x = a + i * h; // Текущее значение x
//         printf("%.4f\t\t%.6f\n", x, y); // Вывод текущего значения x и y
//         y += h * f(x, y); // Метод Эйлера
//     }
//
//     return 0;
// }

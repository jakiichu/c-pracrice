// #include <math.h>
// #include <stdio.h>
// #define N 5
//
// void printMatrix(double matrix[N][N + 1]) {
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N + 1; j++) {
//             printf("%f ", matrix[i][j]);
//         }
//         printf("\n");
//     }
// }
//
// void gaussElimination(double matrix[N][N + 1]) {
//     for (int i = 0; i < N; i++) {
//         double maxEl = fabs(matrix[i][i]);
//         int maxRow = i;
//         for (int k = i + 1; k < N; k++) {
//             if (fabs(matrix[k][i]) > maxEl) {
//                 maxEl = fabs(matrix[k][i]);
//                 maxRow = k;
//             }
//         }
//
//         for (int k = i; k < N + 1; k++) {
//             double tmp = matrix[maxRow][k];
//             matrix[maxRow][k] = matrix[i][k];
//             matrix[i][k] = tmp;
//         }
//
//         for (int k = i + 1; k < N; k++) {
//             double c = -matrix[k][i] / matrix[i][i];
//             for (int j = i; j < N + 1; j++) {
//                 if (i == j) {
//                     matrix[k][j] = 0;
//                 } else {
//                     matrix[k][j] += c * matrix[i][j];
//                 }
//             }
//         }
//     }
//
//     double x[N];
//     for (int i = N - 1; i >= 0; i--) {
//         x[i] = matrix[i][N] / matrix[i][i];
//         for (int k = i - 1; k >= 0; k--) {
//             matrix[k][N] -= matrix[k][i] * x[i];
//         }
//     }
//
//     printf("Answer:\n");
//     for (int i = 0; i < N; i++) {
//         printf("x%d = %f\n", i + 1, x[i]);
//     }
// }
//
//
// int main() {
//     double matrix[N][N + 1] = {
//         {1, 1, 2, 6, 1, -19},
//         {-1, 2, 3, -3, -1, 4},
//         {5, 4, 1, 5, 0, -32},
//         {4, 4, -1, 0, 3, -16},
//         {0, -2, -1, 3, 3, -6}
//     };
//
//     printf("Source matrix:\n");
//     printMatrix(matrix);
//
//     gaussElimination(matrix);
//
//     return 0;
// }

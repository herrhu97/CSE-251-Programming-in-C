#include<stdio.h>
#include<math.h>

/*
    Name: Herrhu
*/

int main() {
    int L, C;
    double Wc;

    printf("Input Capacitance (microfarads): ");
    scanf("%d", &L);

    printf("Input Inductance (millihenrys): ");
    scanf("%d", &C);

    Wc = 1.0 / sqrt(L * 0.000001 * C * 0.001) / (2 * M_PI);
    printf("Resonant Frequency is %.3f\n", Wc);
}
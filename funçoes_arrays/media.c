#include <stdio.h>

double media(double n1, double n2) {
    double resultado = (n1 + n2) / 2;
    return resultado;
}

int main() {
    double numbers[2];

    numbers[0] = 6.0;
    numbers[1] = 10.0;

    double calculo = media(numbers[0], numbers[1]);

    printf("A media sera: %lf", calculo);

    return 0;
}
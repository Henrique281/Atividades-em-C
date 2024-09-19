#include <stdio.h>

int main() {
    // Declaração das variáveis
    int numero_funcionario, horas_trabalhadas;
    float valor_por_hora, salario;

    // Leitura dos valores de entrada
    scanf("%d", &numero_funcionario);
    scanf("%d", &horas_trabalhadas);
    scanf("%f", &valor_por_hora);

    // Calcula o salário
    salario = horas_trabalhadas * valor_por_hora;

    // Imprime o número do funcionário e o salário formatado
    printf("NUMBER = %d\n", numero_funcionario);
    printf("SALARY = U$ %.2f\n", salario);

    return 0;
}

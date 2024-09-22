#include <stdio.h>
#include <string.h>

struct Nota_fiscal {
    int numero;
    char data[20]; 
    char emitente[100];  
    char destinatario[100];  
    char itens[100]; 
    float valor_total;
};

void iniciar_nota(struct Nota_fiscal *p_nota) {
    p_nota->numero = 0;
    strcpy(p_nota->data, "00/00/0000");
    strcpy(p_nota->emitente, "desconhecido");
    strcpy(p_nota->destinatario, "desconhecido");
    strcpy(p_nota->itens, "nenhum item");
    p_nota->valor_total = 0.0;
}

int validar_numero(int numero) {
    return numero > 0; 
}

int validar_data(const char *data) {
    if (strlen(data) != 10) return 0;
    if (data[2] != '/' || data[5] != '/') return 0;

    int dia = (data[0] - '0') * 10 + (data[1] - '0');
    int mes = (data[3] - '0') * 10 + (data[4] - '0');
    int ano = (data[6] - '0') * 1000 + (data[7] - '0') * 100 + (data[8] - '0') * 10 + (data[9] - '0');

    if (dia < 1 || dia > 31) return 0;
    if (mes < 1 || mes > 12) return 0;
    if (ano < 1000 || ano > 9999) return 0;

    return 1;
}

int validar_total(float valor_total) {
    return valor_total > 0;
}

int main() {
    struct Nota_fiscal nota;

    iniciar_nota(&nota);

    printf("Numero da nota (sem zero no começo):\n");
    scanf("%d", &nota.numero);
    while (getchar() != '\n');

    if (!validar_numero(nota.numero)) {
        printf("Numero invalido\n");
        return 1;
    }

    printf("Data (dd/mm/aaaa):\n");
    scanf("%[^\n]", nota.data);
    while (getchar() != '\n');

    if (!validar_data(nota.data)) {
        printf("Data invalida\n");
        return 1;
    }

    printf("Emitente:\n");
    scanf("%[^\n]", nota.emitente);
    while (getchar() != '\n');

    printf("Destinatario:\n");
    scanf("%[^\n]", nota.destinatario);
    while (getchar() != '\n');

    printf("Itens:\n");
    scanf("%[^\n]", nota.itens);
    while (getchar() != '\n');

    printf("Valor total:\n");
    scanf("%f", &nota.valor_total);

    if (!validar_total(nota.valor_total)) {
        printf("Valor total invalido\n");
        return 1;
    }

    printf("\n--- Nota Fiscal ---\n");
    printf("Numero: %d\n", nota.numero);
    printf("Data: %s\n", nota.data);
    printf("Emitente: %s\n", nota.emitente);
    printf("Destinatario: %s\n", nota.destinatario);
    printf("Itens: %s\n", nota.itens);
    printf("Total: %.3f\n", nota.valor_total);

    return 0;
}


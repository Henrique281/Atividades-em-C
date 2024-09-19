#include <stdio.h>

int main() {
    int n, i;
    int ant1 = 0, ant2 = 1, atual;

    scanf("%d", &n);

    if (n <= 0 || n >= 46) {

    } else {


        for (i = 1; i <= n; i++) {
            printf("%d ", ant1);
            atual = ant1 + ant2;
            ant1 = ant2;
            ant2 = atual;
        }

        printf("\n");
    }

    return 0;
}

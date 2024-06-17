#include <stdio.h>

int main() {
    char resultado;
    int vitorias = 0;

  printf("\n");
    for (int i = 1; i <= 6; i++) {
        scanf(" %c", &resultado);

        if (resultado == 'V') {
            vitorias++;
        }
    }

    if (vitorias >= 5) {
        printf("1\n");
    } else if (vitorias >= 3) {
        printf("2\n");
    } else if (vitorias >= 1) {
        printf("3\n");
    } else {
        printf("-1.\n");
    }

    return 0;
}

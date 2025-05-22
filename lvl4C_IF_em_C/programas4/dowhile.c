
#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int numero = 0;

    do {
        printf("Digite um número maior que 0: ");
        scanf("%d", &numero);

        if (numero <= 0) {
            printf("Número inválido. Tente novamente.\n");
        }
    } while (numero <= 0);

    printf("Número válido digitado: %d\n", numero);

    system("pause");

    return 0;
} 
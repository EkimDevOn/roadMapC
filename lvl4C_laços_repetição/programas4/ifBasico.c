#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("Número positivo %d maior que zero.\n", numero);
    }

    system("pause");

    return 0;
}
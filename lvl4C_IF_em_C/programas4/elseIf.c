#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero > 0 && numero <= 100) {
        printf("Número maior que 0: %d\n", numero);
    }else if (numero >=0 && numero <= 100) {
        printf("Número citado esta entre 0 e 100: %d\n", numero);
    }else {
        printf("ACIMA DE 100: %d\n", numero);
    }

    system("pause");

    return 0;
}
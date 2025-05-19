#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero >= 1 && numero <= 10) {
        printf("O número esta entre 1 e 10: %d\n", numero);
    }else{
        printf("Número citado acima de 1 e 10\n");
    }

    system("pause");

    return 0;
}
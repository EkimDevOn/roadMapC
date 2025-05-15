#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int valor = 10;
    int *ponteiro = &valor;

    printf("Valor; %d.\n", valor);
    printf("Endereço de 'valor': %p.\n", &valor);
    printf("Valor do ponteiro %p.\n", ponteiro);
    printf("Valor apontado pelo ponteiro %d.\n", *ponteiro);

    system("pause");

    return 0;
}
#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int numero = 255;
    float pi = 3.141592653589793;

    printf("Decimal: %d\n", numero);
    printf("Hexadecimal: %x\n", numero);
    printf("Octal: %o\n", numero);

    system("pause");

    printf("\nNúmero com largura de campo 5: %5d.\n", numero);
    printf("Número com largura 5 e alinhamento á esquerda: %-5d.\n", numero);

    system("\npause");

    printf("\nPi com 2 casas decimasis: %.2f\n", pi);
    printf("Pi com 5 casas decimais %.5f", pi);

    system("\npause");

    //Printf()
    printf("\nNova linha: \n");
    printf("Tabulação horizontal: \t");
    printf("Retorno de carro: \r");
    printf("Backspace: \b");
    printf("Form feed: \f");
    printf("Tabulação vertical: \v");
    printf("Barra invertida: \\\\");
    printf("Aspa simples: \'");
    printf("Aspa dupla: \"");
    printf("Interrogação: \?");
    printf("Alerta: \a");

    system("\npause");

    return 0;
}

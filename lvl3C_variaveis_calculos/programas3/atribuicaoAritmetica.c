#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int dado = 10;

    printf("Valor inicial do dado: %d\n", dado);

    dado++;
    printf("Adcionado soma: %d\n", dado);

    dado--;
    printf("Subtraído para: %d\n", dado);

    dado += 3;
    printf("Incremento de 3 unidades: %d\n", dado);

    dado -= 2;
    printf("Decremento de 2 unidades: %d\n", dado);

    dado *= 10;
    printf("Multiplicado por 10: %d\n", dado);

    system("pause");

    return 0;
}

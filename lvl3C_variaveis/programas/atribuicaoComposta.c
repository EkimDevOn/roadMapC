#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);

    int x = 10;

    x += 5;
    printf("x = %d\n", x); // equivalente a x = x + 5;

    x -= 3; // equivalente a x = x - 3;
    printf("x = %d\n", x);

    x *= 2; // equivalente a x = x * 2;
    printf("x = %d\n", x);

    x /= 4; // equivalente a x = x / 4;
    printf("x = %d\n", x);

    x %= 5; // equivalente a x = x % 5;
    printf("x = %d\n", x);

    system("pause");

    return 0;


}

// +=: Adiciona um valor à variável e atribui o resultado à variável.
// -=: Subtrai um valor da variável e atribui o resultado à variável.
// *=: Multiplica a variável por um valor e atribui o resultado à variável.
// /=: Divide a variável por um valor e atribui o resultado à variável.
// %=: Calcula o módulo da variável por um valor e atribui o resultado à variável.
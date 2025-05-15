#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8); //Não tem string= atribuida, más é pra não perder o costume das simbologias...shashasha

    int a, b ,c;

    a = 10;
    b = 20;
    c = a + b;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    system("pause"); //Questão de costume...

    return 0;
}
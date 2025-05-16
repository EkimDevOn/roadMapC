#include <stdio.h>
#include <windows.h>

#define texto "Entratda e saída de dados." // variavel constante

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int idade = 0;
    float altura = 0.00;
    char nome[50] = "";

    printf("%s\n", texto);

    printf("digite sua idade:\n");
    scanf("%d", &idade);
    printf("Digite sua altura:\n");
    scanf("%f", &altura);
    printf("Digite seu nome:\n");
    scanf("%s", nome);

    printf("Dados informados:\n");
    printf("Idade: %d.\n", idade);
    printf("Altura: %.2f.\n", altura); // altura com apenas 2 casas decimais %.2f
    printf("Nome: %s.\n", nome);

    system("pause");

    return 0;
}
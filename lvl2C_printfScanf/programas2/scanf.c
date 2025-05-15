#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);

    int numero; //numero inteiro %d\n
    float numero1; //ponto flutuante %f\n
    char nome[60];// lendo uma string %s\n

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("Digite um número flutuante: ");
    scanf("%f", &numero1);

    printf("Digite seu nome: ");
    scanf("%s", &nome);

    printf("Você digitou: %d\n", numero);

    printf("Seu número flutuante é: %f\n", numero1);

    printf("Olá, %s\n", nome);
     
    system("pause");
    
    return 0;
}
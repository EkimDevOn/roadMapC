#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    float base, altura, area;

    printf("Digite a base do retângulo: ");
    scanf("%f", &base);
    printf("Base lida: %.2f\n", base); // Debug manual com printf

    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);
    printf("Altura lida: %.2f\n", altura);// Debug manual com printf


    area = base * altura;
    printf("Área calculada: %.2f\n", area);// Debug manual com printf

    printf("Área retângulo é: %.2f\n", area);

    system("pause");

    return 0;

} 
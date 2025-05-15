#include <stdio.h> //#include <stdio.h> permite o uso de funções de entrada e saída, como printf e scanf.
#include <windows.h> // simbologia windows  biblioteca

int main() {
    SetConsoleOutputCP(CP_UTF8); // simbologia windows  função
    float base, altura, area;

    // Solicita ao usuário que inseira a base e a altura 
    printf("Digite a base do retângulo: ");
    scanf("%f", &base);

    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);

    // calculando a área
    area = base * altura;

    // imprime o resultado
    printf("A área do retângulo é: %.2f\n", area);

    system("pause");

    return 0;
}

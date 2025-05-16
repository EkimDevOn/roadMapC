#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    //Adição
    int a = 10;
    int b = 20;
    int soma = a + b;
    //Subtração
    int c = 20;
    int d = 10;
    int diferenca = c - d;
    //Multiplicação
    int e = 10;
    int f = 5;
    int produto = e * f;
    //Divisão
    int g = 100;
    int h = 20;
    int quociente = g / h;
    //Módulo (Resto da Divisão)
    int i = 20;
    int j = 3;
    int resto = i % j;
    //Cálculos com Números de Ponto Flutuante
    float k = 20.5;
    float l = 2.0;
    float resultado = k / l;
    //Exemplo com double
    double m = 20.5;
    double n = 4.0;
    double resolucao = m / n;
    //Cálculos
    int A, B, somaa, subtr, mult, divis;

    printf("A soma de %d e %d é %d\n", a, b, soma);
    printf("A diferença entre %d e %d é %d\n", c, d, diferenca);
    printf("O produto de %d e %d é %d\n", e, f, produto);
    printf("O quociente de %d dividido por %d é %d\n", g, h, quociente);
    printf("O resto de %d dividido por %d é %d\n", i, j, resto);
    printf("O resultado de %.2f dividido por %.2f é %.2f\n", k, l, resultado);
    printf("O resultado de %.2lf dividido por %.2lf é %.2lf\n", m, n, resolucao);
    //Cálculos
    printf("Digite o primeiro número:\n");
    scanf("%d", &A);
    printf("Digite o segundo número:\n");
    scanf("%d", &B);

    somaa = A + B;
    subtr = A - B;
    mult = A * B;
    divis = A / B;

    printf("Resultado:\n");
    printf("Soma: %d.\n", somaa);
    printf("Subtr: %d.\n", subtr);
    printf("Multi: %d.\n", mult);
    printf("Divis: %d.\n", divis);

    system("pause");

    return 0;
} 
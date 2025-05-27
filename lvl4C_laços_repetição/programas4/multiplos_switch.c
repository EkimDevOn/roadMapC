#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int nota;

    printf("Digite sua nota: ");
    scanf("%d", &nota);

    switch (nota)
    {
    case 9:
    case 10:
        printf("Aprovado com Distinção\n");
        break;
    case 7:
    case 8:
        printf("Aprovado\n");
        break;
    case 6:
    case 5:
        printf("Recuperação\n");
        break;
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        printf("Reprovado\n");
        break;
    default:
        break;
    }

    system("pause");

    return 0;
}
#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    char nome[] = "João";
    char sobrenome[] = "Guilherme";

    printf("%s\n", nome);
    printf("%s\n", sobrenome);

    system("pause");

    return 0; 
}
#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int contador = 1;
    int numero;

    while (contador <= 5) // condição enquanto for menos ou igual a 5
    {
        printf("%d\n", contador); // Imprime o valor do contador
        contador++; // Incrementa o cantador
    }

    system("pause");

    printf("digite números positivos (digite um número negativo para sair):\n");

    while (1)//Loop infinito
    {
        scanf("%d", &numero);// Lê um nÚmero do usuário
        
        if (numero < 0) // Condição de parada
        {
            printf("Número negativo digitado. Saindo do loop.\n");
            break;// Sai do loop
        }

        printf("Número digitado: %d\n", numero);
        
    }
    
    system("pause");

    return 0;
}
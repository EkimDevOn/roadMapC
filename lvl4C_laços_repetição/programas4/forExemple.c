#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    //for para iterar em um array:
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i <= 10; i += 2) {
        printf("\n%d\n", i);
    }

    system("\npause\n");
    //indicado i inicar em 0 i = 0 em variáveis de controle
    for (int i = 0; i < size; i++){
        printf("Elemento \n%d\n", numbers[i]);
    }

    return 0;
}

/*
    
##-Condição Opcional: A condição pode ser omitida, mas isso resulta em um loop infinito. Por exemplo:

for (int i = 0; ; i++) {
    printf("%d\n", i);
    if (i >= 5) break; // Para o loop após 5 iterações
}

xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

##-Incremento Opcional: O incremento também pode ser omitido, mas você precisa atualizar a variável de controle
 dentro do bloco de código para evitar um loop infinito:

for (int i = 0; i < 5; ) {
    printf("%d\n", i);
    i++; // Incremento manual
}
*/
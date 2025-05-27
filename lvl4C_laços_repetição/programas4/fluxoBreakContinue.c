#include <stdio.h>
#include <windows.h>

int main() {
    for (int i =0; i < 10; i++) {
        if(i == 5) {
            break;// Sai do loop quando i for iqual a 5
        }
        printf("%d\n", i);
    }
    printf("Loop terminado.\n");
}

/*

### - Usar com Cuidado: Ambos os comandos podem tornar o código mais complexo se usados em excesso.
 Use-os apenas quando necessário para melhorar a legibilidade e a eficiência do código.

## - Estrutura de Controle: break e continue só podem ser usados dentro de loops (for, while, do-while) e switch statements. 
Usá-los fora dessas estruturas resultará em erro de compilação

Exemplo com while:

#include <stdio.h>

int main() {
    int i = 0;
    while (i < 10) {
        if (i == 5) {
            break; // Sai do loop quando i for igual a 5
        }
        printf("%d\n", i);
        i++;
    }
    printf("Loop terminado.\n");
    return 0;
}

xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

Exemplo com switch:

#include <stdio.h>

int main() {
    int num = 3;
    switch (num) {
        case 1:
            printf("Número é 1\n");
            break;
        case 2:
            printf("Número é 2\n");
            break;
        case 3:
            printf("Número é 3\n");
            break;
        default:
            printf("Número desconhecido\n");
    }
    printf("Fora do switch.\n");
    return 0;
}

xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

Comando continue // pula interação e continua

Exemplo com for:

#include <stdio.h>

int main() {
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            continue; // Pula a iteração quando i é par
        }
        printf("%d\n", i);
    }
    printf("Loop terminado.\n");
    return 0;
}

xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

Exemplo com while

#include <stdio.h>

int main() {
    int i = 0;
    while (i < 10) {
        i++;
        if (i % 2 == 0) {
            continue; // Pula a iteração quando i é par
        }
        printf("%d\n", i);
    }
    printf("Loop terminado.\n");
    return 0;
}

*/
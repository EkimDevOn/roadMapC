#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    // Declaração e inicialização de um vetor 
    int numeros[5] = {10, 20, 30, 40, 50};

    //Acesso e modificação de um elemento
    printf("O segundo elemento é: %d\n", numeros[1]); // Acessa o segundo elemento do (índice 1)

    numeros[1] = 25; // Modifica o segundo elemento
    printf("O segundo elemento agora é: %d\n", numeros[1]);

    // Interação sobre elementos de uma vetor
    printf("\nElementos de vetor:\n");
    for (int i = 0; i < 2; i++) {
        printf("Elementos %d: %d\n", i, numeros[i]);
    }

    // Vetor multidimensional (matriz 2D)
    int matriz[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("\nElementos da matriz:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: %d\n", i, j, matriz[i][j]);
        }
    }

    return 0;

}
/*
int main(){
    int v[5];
    float m;

    v[0] = 10;
    v[1] = 20;
    v[2] = 30;
    v[3] = 40;
    v[4] = 50;

    m = (v[0] + v[1] + v[2] + v[3] + v[4]) / 5; // calculo médio de um vetor soma tudo e divide pelo seu tamano no caso é 5

    printf("Cálculo médio do vetor: %f\n", m);

    system("pause");

    return 0;
}

xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
## outra forma de escrever o mesmo código com for

int main() {
    int v[5] = {10, 20, 30, 40, 50};
    int i;
    float s;

    for (i = 0; i < 5; i++) { // percorre o índice do vetor
        s += v[i]; // s = 0 recebe o conteúdo dela própria soma o valor do vetor na posição i, "v[i]"
    }

    printf("Resultado da soma média do vetor: %f", s/5); // dividido pelo tamanho do vetor

}

xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
## mais um exemplo com usuário preenchendo o vetor:

int main() {
    int v[5];
    int i;
    
    for(i=0;i<5;i++) {
    printf("Digite um dado:");
    scanf("%d", &v[i]);
    }
    
    for (i=0;i<5;i++) {
        printf("\nDado inserido: %d\n", v[i]);
    }
    
    return 0;
}

xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

 // Vetor multidimensional (matriz 2D)
 
    int matriz[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("Elementos da matriz:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: %d\n", i, j, matriz[i][j]);
        }
    }

    return 0;
}
*/
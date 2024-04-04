#include  <stdio.h>
#include <stdlib.h>
#include <time.h> //fornece funções e tipos de dados relacionados ao tempo. Ela é usada para manipular operações relacionadas ao tempo, como obter a data e a hora atuais, calcular diferenças de tempo, formatar e exibir informações de data e hora, entre outras coisas.

// Como liberar memória alocada dinamicamente com a função free()

int main() {
    int i, tam, *vet;
    printf("Digite p tamanho do vetor: ");
    scanf("%d", &tam);
    srand(time(NULL));

    vet = malloc(tam * sizeof(int));

    if(vet != NULL) {
        printf("Memória alocada com sucessso!\n");
    for(i = 0; i < tam;  i++)
          vet[i] = rand() % 100;
        
        printf("Vetor original: \n");
    for(i =  0; i < tam;  i ++)
        printf("%d ", vet[i]);

    tam *= 2; // Dobrando o tamanho do vetor
   
    vet = realloc(vet, tam);

    int *temp = realloc(vet, tam * sizeof(int));
    if (temp != NULL) {
            vet = temp;
            printf("\nVetor realocado: \n");
            for (i = 0; i < tam; i++)
                printf("%d ", vet[i]);
    } else {
        printf("\nErro ao realocar memória!\n");
        // Se a realocação falhar, você deve liberar a memória original
        free(vet); //liberando memóri
    }
    } else {
        printf("Erro ao alocar memória!\n");
    }
    return 0;
}

/*int *p;

float *q;

char *r;


As variáveis p, q e r são apontadores (ponteiro) para um inteiro, float e caractere, respectivamente.

*/
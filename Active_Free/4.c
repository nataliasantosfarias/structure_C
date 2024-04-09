#include <stdio.h>

int main(){
    int vetor[5];
    int i;

    printf("Digite os elementos do vetor:\n");
    
    
    // Recebendo as entradas do usuário e armazenando no vetor
    for (i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

     // Exibindo o vetor 
    
    printf("Valores inseridos no vetor inserido: "); 

    for (i = 0; i < 5; i ++){
        printf("%d , ", vetor[i]);
    
    }
    printf("\n");

    return 0;
}
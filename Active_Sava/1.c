#include  <stdio.h>
#include <stdlib.h>

// Alocação dinâmica de memória com a função MALLOC.
// Retorna um ponteiro para região de memória alocada ou NULL.

//sizeof = operador

int main () {
    int *x; // do tipo ponmeiro

    x = malloc(sizeof(int));

    if(x) { // verifica se à alocação de memória
        printf("Memória alocada com sucesso!\n");
        printf("x : %d\n",  *x);
        *x = 50;
        printf("x : %d\n",  *x);

    }
    else{
        printf("erro ao alocar a memória!\n");
    }
   
    return 0;
}

/*int *p;

float *q;

char *r;


As variáveis p, q e r são apontadores (ponteiro) para um inteiro, float e caractere, respectivamente.

*/
#include <stdio.h>
#include <string.h>

int contarOcorrencias(const char *texto, const char *palavra) {
    int contagem = 0;
    int tamanhoTexto = strlen(texto);
    int tamanhoPalavra = strlen(palavra);

    // Verifica cada posição do texto

    for (int i = 0; i <= tamanhoTexto - tamanhoPalavra; i++) {
        // Verifica se a substring do texto na posição atual corresponde à palavra
        if (strncmp(&texto[i], palavra, tamanhoPalavra) == 0) {
            contagem++;
        }
    }

    return contagem;
}

int main() {
    char texto[] = "cara caramba, cara caraô";
    char palavra[] = "cara";

    int ocorrencias = contarOcorrencias(texto, palavra);

    printf("A palavra '%s' ocorre %d vezes no texto.\n", palavra, ocorrencias);

    return 0;
}

// A função strlen é usada para determinar o tamanho das strings, enquanto strncmp é usada para comparar duas strings até um certo número de caracteres.

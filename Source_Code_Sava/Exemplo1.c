    #include <stdio.h>    //biblioteca para premitir entrada e saída de dados!

    static int a = 0;     //  variável global, alocação estática(nõa altera)

    void incrementa(void)  { // Definição a função 'incrementa' que não recebe argumentos e não retorna nenhum valor quando chamada

    int b = 0;           // variável local, a alocação vai ser automática iniciada com 0!
    static int c = 0;    // variável local, alocação estática iniciada com 0!

    printf("a: %d, b: %d, c: %d\n", a, b, c );
    
    a++;
    b++;
    c++;
}
  int main(void) {

  int i;
  for(i = 0; i < 5; i++)
  incrementa();
                //system("pause");Esta linha é específica para sistemas Windows e é usada para pausar a execução do programa antes de terminar,

                //Em sistemas Unix ussamos o = getchar();           
  return(0);

}

// *OBS* A única variável que não secebeu valores durante a função incrementa foi a B, pois ela é automática 
//Neste caso, o valor da variável “b” não se preserva durante a chamada da função incrementa, isto é, o valor alocado à variável não se mantém durante toda a vida do programa.
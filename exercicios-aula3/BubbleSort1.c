#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAMANHO 100000
void main()
{
    int vetor[TAMANHO];                    //vetor com tamanho definido
    int aux = 0, cont1 = 0, cont = 0, esc; //varivel para ser usada na troca
    clock_t tempoInicial, tempoFinal;      //Variaveis para guardar o tempo de execucao
    srand(time(NULL));                     //Cria uma semente para numeros aleatorios
    tempoInicial = clock();                //inicia contagem do tempo

    printf("Decrescente(1) Crescente(2) Aleatório(3)");
    scanf("%d", &esc);

    if (esc == 1)
    {
        //Ordena vetor pelo metodo da bolha
        for (int i = 0; i < TAMANHO; i++)
        {
            for (int j = 1; j < TAMANHO - 1; j++)
            {
                cont += 1;
                if (vetor[j] < vetor[j + 1])
                {
                    aux = vetor[j];
                    vetor[j] = vetor[j + 1];
                    vetor[j + 1] = aux;
                    cont1 += 1;
                }
            }
        }
        printf("Quntidade de comparações: %d\nQuntidade de trocas: %d\n", cont, cont1);
        tempoFinal = clock(); //finaliza contagem do tempo
        //calcula e mostra o tempo total de execucao
        printf("Tempo: %f s\n", (double)(tempoFinal - tempoInicial) / CLOCKS_PER_SEC);
    }
    else if (esc == 2)
    {

        //Ordena vetor pelo metodo da bolha
        for (int i = 1; i < TAMANHO; i++)
        {
            for (int j = 1; j < TAMANHO - 1; j++)
            {
                cont += 1;
                if (vetor[j] > vetor[j + 1])
                {
                    aux = vetor[j];
                    vetor[j] = vetor[j + 1];
                    vetor[j + 1] = aux;
                    cont1 += 1;
                }
            }
        }
        printf("Quntidade de comparações: %d\nQuntidade de trocas: %d\n", cont, cont1);
        tempoFinal = clock(); //finaliza contagem do tempo
        //calcula e mostra o tempo total de execucao
        printf("Tempo: %f s\n", (double)(tempoFinal - tempoInicial) / CLOCKS_PER_SEC);
    }
    else if (esc == 3)
    {
        for (int i = 0; i < TAMANHO; i++)
        {
            vetor[i] = rand() % 10; //Atribui um inteiro aleatorio entre 0 e 9
        }
        printf("Sem trocas e sem comparações");
        tempoFinal = clock(); //finaliza contagem do tempo
        //calcula e mostra o tempo total de execucao
        printf("Tempo: %f s\n", (double)(tempoFinal - tempoInicial) / CLOCKS_PER_SEC);
    }
    else
    {
        printf("Não indentificado!");
    }
}
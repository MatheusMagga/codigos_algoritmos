#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAMANHO 100000
void main()
{
    int vetor[TAMANHO]; //vetor com tamanho definido
    int eleito = 0, esc = 0, cont = 0, cont1 = 0;
    int j = 0;
    clock_t tempoInicial, tempoFinal; //Variaveis para guardar o tempo de execucao
    srand(time(NULL));                //Cria uma semente para numeros aleatorios
    tempoInicial = clock();           //inicia contagem do tempo

    printf("Decrescente(1) Crescente(2) Aleatório(3)");
    scanf("%d", &esc);

    if (esc == 1)
    {
        for (int i = 1; i < TAMANHO; i++)
        {
            cont++;
            eleito = vetor[i];
            j = i - 1;
            while (j >= 0 && vetor[j] < eleito)
            {
                vetor[j + 1] = vetor[j];
                j--;
                cont1++;
            }
            vetor[j + 1] = eleito;
        }
        printf("Quntidade de comparações: %d\nQuntidade de trocas: %d\n", cont, cont1);
        tempoFinal = clock(); //finaliza contagem do tempo
        //calcula e mostra o tempo total de execucao
        printf("Tempo: %f s\n", (double)(tempoFinal - tempoInicial) / CLOCKS_PER_SEC);
    }
    else if (esc == 2)
    {
        for (int i = 1; i < TAMANHO; i++)
        {
            cont++;
            eleito = vetor[i];
            j = i - 1;
            while (j >= 0 && vetor[j] > eleito)
            {
                vetor[j + 1] = vetor[j];
                j--;
                cont1++;
            }
            vetor[j + 1] = eleito;
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
            vetor[i] = rand() % 10; //Atribui um inteiro aleatorio entre 0 e 5
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
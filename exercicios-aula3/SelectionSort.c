#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAMANHO 100000
void main()
{
    int vetor[TAMANHO];                        //vetor com tamanho definido
    int aux = 0, cont = 0, cont1 = 0, esc = 0; //varivel para ser usada na troca
    int eleito, menor, posicaoDoMenor;
    clock_t tempoInicial, tempoFinal; //Variaveis para guardar o tempo de execucao
    srand(time(NULL));                //Cria uma semente para numeros aleatorios
    tempoInicial = clock();           //inicia contagem do tempo

    printf("Decrescente(1) Crescente(2) Aleatório(3)");
    scanf("%d", &esc);

    if (esc == 3)
    {
        for (int i = 0; i < TAMANHO; i++)
        {
            vetor[i] = rand() % 10; //Atribui um inteiro aleatorio entre 0 e 5
            printf("Sem trocas e sem comparações");
            tempoFinal = clock(); //finaliza contagem do tempo
            //calcula e mostra o tempo total de execucao
            printf("Tempo: %f s\n", (double)(tempoFinal - tempoInicial) / CLOCKS_PER_SEC);
        }
    }
    else if (esc == 2)
    {
        //Ordena vetor pelo metodo da da selecao
        for (int i = 0; i < TAMANHO - 2; i++)
        { // 0 -> penultina posicao
            eleito = vetor[i];
            menor = vetor[i + 1];
            posicaoDoMenor = i + 1;
            for (int j = i + 1; j < TAMANHO; j++)
            {
                cont += 1;
                if (vetor[j] < menor)
                {
                    menor = vetor[j];
                    posicaoDoMenor = j;
                }
            }
            if (menor < eleito)
            {
                cont1 += 1;
                vetor[i] = vetor[posicaoDoMenor];
                vetor[posicaoDoMenor] = eleito;
            }
        }
        printf("Quntidade de comparações: %d\nQuntidade de trocas: %d\n", cont, cont1);
        tempoFinal = clock(); //finaliza contagem do tempo
        //calcula e mostra o tempo total de execucao
        printf("Tempo: %f s\n", (double)(tempoFinal - tempoInicial) / CLOCKS_PER_SEC);
    }
    else if (esc == 1)
    {
        //Ordena vetor pelo metodo da da selecao
        for (int i = 0; i < TAMANHO - 2; i++)
        { // 0 -> penultina posicao
            eleito = vetor[i];
            menor = vetor[i + 1];
            posicaoDoMenor = i + 1;
            for (int j = i + 1; j < TAMANHO; j++)
            {
                cont += 1;
                if (vetor[j] < menor)
                {
                    menor = vetor[j];
                    posicaoDoMenor = j;
                }
            }
            if (menor < eleito)
            {
                cont1 += 1;
                vetor[i] = vetor[posicaoDoMenor];
                vetor[posicaoDoMenor] = eleito;
            }
        }
        printf("Quntidade de comparações: %d\nQuntidade de trocas: %d\n", cont, cont1);
        tempoFinal = clock(); //finaliza contagem do tempo
        //calcula e mostra o tempo total de execucao
        printf("Tempo: %f s\n", (double)(tempoFinal - tempoInicial) / CLOCKS_PER_SEC);
    }
}
#include <iostream>
#include "ordenar.h"
// #define TAM 5

using namespace std;

bool existeVetor(bool preenchido)
{
    if (!preenchido)
    {
        cout << "Preencha o vetor antes de ordená-lo!\n";
        return false;
    }
    return true;
}

void preencherVetor(int *vetor, int TAM)
{

    cout << "\n\nPreenchendo o vetor:\n";

    for (int i = 0; i < TAM; i++)
    {
        cout << i + 1 << "° número: ";
        cin >> vetor[i];
    }
}

void exibirVetor(int *vetor, int TAM)
{

    cout << "\nExibindo informações do vetor:\n";

    for (int i = 0; i < TAM; i++)
    {
        cout << vetor[i] << " - ";
    }
}

void ordenacaoBubble(int *vetor, int TAM)
{
    int aux;

    for (int etapa = 1; etapa < TAM; etapa++)
    {
        bool alteracao = false;

        for (int i = 0; i < TAM - etapa; i++)
        {

            if (vetor[i] > vetor[i + 1])
            {
                aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = aux;
                alteracao = true;
            }
        }

        if (!alteracao)
            break;
    }
}

void ordenacaoSelection(int *vetor, int TAM)
{
    int temp, aux;

    for (int etapa = 0; etapa < TAM - 1; etapa++)
    {
        aux = vetor[etapa];

        for (int j = etapa + 1; j < TAM; j++)
        {
            if (vetor[j] < aux)
            {
                temp = aux;
                aux = vetor[j];
                vetor[j] = temp;
            }
        }
        vetor[etapa] = aux;
    }
}

void ordenacaoInsertion(int *vetor, int TAM)
{
    int aux;

    for (int etapa = 1; etapa < TAM; etapa++)
    {
        int minimo = vetor[etapa];

        for (int j = etapa - 1; (j >= 0 && minimo < vetor[j]); j--)
        {
            vetor[j + 1] = vetor[j];
        }
    }
}

void metodoShell(int valor[], int tam)
{
    int aux, j;

    for (int gap = tam / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < tam; i++)
        {
            aux = vetor[i];
            j = i;

            while (j >= gap && gap[j - gap] > aux)
            {
                vetor[j] = vetor[j - gap];
                j -= gap;
            }
            vetor[j] = aux;
        }
    }
}

int metodoSort(int *vetor, int inicio, int fim)
{
    if (inicio >= fim)
        return;

    int meio = inicio + (fim - inicio) / 2;
    metodoSort(vetor, inicio, meio);
    metodoSort(vetor, inicio + 1, fim);
    mergE(vetor, inicio, meio, fim);
}

void mergE(int *V, int inicio, int meio, int fim)
{
    int *temp, tam;
    tam = fim - inicio + 1;
    temp = new int[tam];

    int p1, p2, i, j, k, fim1 = 0, fim2 = 0;

    p1 = inicio;
    p2 = meio + 1;

    if (temp != NULL)
    {
        for (int i = 0; i < tam; i++)
        {
            if (fim1 == 0 && fim2 == 0)
            {
                if (V[p1] < V[p2])
                {
                    temp[i] = V[p1];
                    p1++;
                }
                else
                {
                    temp[i] = V[p2];
                    p2++;
                }

                if (p1 > meio)
                    fim1 = 1;
                if (p2 > fim)
                    fim2 = 1;
            }
            else
            {
                if (fim1 == 0)
                {
                    // temp[i]= V[p1++];
                    temp[i] = V[p1];
                    p1++;
                }
                else
                {
                    // temp[i] = V[p2++];
                    temp[i] = V[p2];
                    p2++;
                }
            }
        }
        for (j = 0, k = inicio; j < tam; j++, k++)
            V[k] = temp[j];
    }
    delete[] temp;
}

void quickSort(int *V, int inicio, int fim)
{
    int pivo;

    if (fim > inicio){
        pivo = particiona(V, inicio, fim);
        quickSort(V, inicio, pivo - 1);
        quickSort(V, pivo+1, fim);
    }
}

int particiona (int *V, int inicio, int fim, int final ){
    int pivo, aux;

    int meio = inicio + (fim - inicio) / 2;
    
    pivo = V[meio];

    while(inicio < final){
        while(inicio <= final && V[inicio] <= pivo)
        inicio++;

        while(final >= 0 && V[final] > pivo)
        final--;

        if(inicio < final){
            aux = V[inicio];
            V[inicio] = V[final];
            V[final] = aux;
        }
    }

    V[inicio] = V[final];
    V[final] = pivo;
    
    return final;
}
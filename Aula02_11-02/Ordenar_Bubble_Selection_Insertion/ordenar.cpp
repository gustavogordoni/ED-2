#include <iostream>
#include "ordenar.h"
// #define TAM 5

using namespace std;

void preencherVetor(int *vetor, int TAM){

    cout << "\n\nPreenchendo o vetor:\n";

    for(int i=0; i<TAM; i++){
        cout << i+1 << "° número: ";
        cin >> vetor[i];
    }
}

void exibirVetor(int *vetor, int TAM){

    cout << "\nExibindo informações do vetor:\n";

    for(int i=0; i<TAM; i++){
        cout << vetor[i] << " - ";
    }
}

void ordenacaoBubble(int *vetor, int TAM){
    int aux;

    for(int etapa = 1; etapa < TAM; etapa++){
        bool alteracao = false;

        for(int i = 0; i < TAM-etapa; i++){

            if(vetor[i] > vetor[i+1]){
               aux =  vetor[i];
               vetor[i] = vetor[i+1];
               vetor[i+1] = aux;
               alteracao = true;
            }
        }

        if(!alteracao)
            break;
    }
}

void ordenacaoSelection(int *vetor, int TAM){
    int temp, aux;

    for(int etapa = 0; etapa < TAM-1; etapa++){
        aux = vetor[etapa];

        for(int j = etapa+1; j<TAM; j++){
            if(vetor[j] < aux){
                temp = aux;
                aux = vetor[j];
                vetor[j] = temp;
            }
        }
        vetor[etapa] = aux;
    }
}

void ordenacaoInsertion(int *vetor, int TAM){
    int aux;

    for(int etapa = 1; etapa < TAM; etapa++){
        int minimo = vetor[etapa];

        for(int j = 'etapa-1; (j >= 0 && minimo < vetor[j]); j--){
            vetor[j+1] = vetor[j];
        }
    }
}



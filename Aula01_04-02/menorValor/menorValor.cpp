/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <rpcndr.h>
#include "menorValor.h"
#define TAM 5s
using namespace std;

//void menorValor(){   
//    int vetor[TAM];
//    int aux[TAM];
//    
//    int menor = vetor[0], maior = 0, pos = 0;
//    
//    for(int i=0; i < TAM; i++){
//        for(int j=0; j < TAM; j++){
//            if(vetor[j] < menor){
//                menor = vetor[j];
//                pos = j;                
//            }
//        }
//        
//        aux[i] = menor;
//        vetor[pos] = maior;
//        menor = vetor[0];
//    }
//}

void menorValor(){
    int vetor[TAM];
    
    int aux;
    boolean alteracao = false;
    
    for(int j = 0; j < TAM; j++){                
                    
        for(int i = 0; i < TAM; i++){        
            if(vetor[i+1] < vetor[i]){
                // Sem próximo é maior
               aux =  vetor[i+1];
               vetor[i+1] = vetor[i];
               vetor[i] = aux;
               alteracao = true;
            }
            
            if(!alteracao) i=TAM;
        }        
    }
}

void preencheVetor(){
    int vetor[TAM];
    
    cout << "\n\nPreenchendo o vetor:\n";
    
    for(int i=0; i<TAM; i++){
        cout << i+1 << "° número\n";
        
        cin >> vetor[i];
    }
}

void exibeVetor(){
    int vetor[TAM];
    
    cout << "\nExibindo informações do vetor:\n";
    
    for(int i=0; i<TAM; i++){
        cout << vetor[i] << " - ";        
    }
}


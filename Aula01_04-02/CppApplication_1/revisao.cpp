/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include "revisao.h"

using namespace std;

void preencheVetor(){
    int tam=10, vetor[tam], i;
    
    cout << "\n\nPreenchendo o vetor:\n";
    
    for(i=0; i<10; i++){
        cout << i+1 << "° número\n";
        
        cin >> vetor[i];
    }
    
    cout << "\nExibindo informações do vetor:\n";
    
    for(i=0; i<10; i++){
        cout << vetor[i] << " - ";      
        
    }
    
}
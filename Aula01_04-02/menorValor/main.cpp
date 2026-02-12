/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Aluno
 *
 * Created on 4 de Fevereiro de 2026, 11:18
 */

#include <cstdlib>
#include <iostream>
#include "menorValor.h""

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    char menu;
    
    do{
        cout << "\n\n1 - Preencher e exibir vetor\n"
                "0 - Sair do menu";
        
        cin >> menu;
        
        cin.ignore();
        
        switch(menu){
            case '1':
                cout << "vugnaes";
            case '0':
                cout << "\nSaindo do menu.";
        }
    }while(menu != '0');

    return 0;
}


#include <iostream>
#include "ordenar.h"

using namespace std;

int main()
{
    char menu;
    int tam = 5;
    int vetor[tam] = {};

    do{
        cout << "\n\n1 - Preencher Vetor"
                "\n2 - Exibir Vetor"
                "\n3 - Ordenar por Bubble"
                "\n4 - Ordenar por Selection"
                "\n5 - Ordenar por Insertion"
                "\n0 - Sair do menu"
                "\n--> ";

        cin >> menu;

//         cin.ignore();

        switch(menu){
            case '1':
                preencherVetor(vetor, tam);
                break;
            case '2':
                exibirVetor(vetor, tam);
                break;
            case '3':
                ordenacaoBubble(vetor, tam);
                break;
            case '4':
                ordenacaoSelection(vetor, tam);
                break;
            case '5':
                //ordenacaoInsertion()(vetor, tam);
                break;
            case '0':
                cout << "\nSaindo do menu.";
        }
    }while(menu != '0');
}

#include <iostream>
#include "insert.h"

using namespace std;

int main()
{
    char menu;

    do{
        cout << "\n\nOrdenar Vetor\n"
                "0 - Sair do menu";

        cin >> menu;

        cin.ignore();

        switch(menu){
            case '1':
                ordenacaoInsert([3, 5, 2, 7, 4], 5)
            case '0':
                cout << "\nSaindo do menu.";
        }
    }while(menu != '0');
}

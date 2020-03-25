#include <iostream>
#include <locale.h>
#include <vector>
#include <windows.h>
#include "jogador.h"
#include "bancoDeDados.h"

using namespace std;

void ApresentaMenu()
{
    cout << "O que deseja fazer?\n" <<endl;
    cout << "1 - Calcular dano que tomou\n" << endl;
    cout << "2 - Criar Personagem\n" << endl;
    cout << "3 - Upar de Level\n" << endl;
    cout << "4 - Mostrar Dados do Personagem\n" << endl;
    cout << "5 - Mostrar atributos básicos de cada raça\n" << endl;
    cout << "6 - Curar-se\n" << endl;
    cout << "7 - Sair\n" << endl;
}

int main()
{
    setlocale (LC_ALL,"portuguese");

    jogador j1; bancoDeDados b1;

    j1 = b1.LerArquivo();

    ApresentaMenu();
    int op; cin >> op;

    while(op <= 0 || op > 7)
    {
        cout << "Digite um número válido\n" << endl;
        cin >> op;
    }

    while(op!=7)
    {
        system("cls");
        switch(op)
        {
            case 1: j1.CalculaVida(); break;
            case 2: j1.CriarPersonagem(); break;
            case 3: j1.UparDeLevel(); break;
            case 4: cout << j1.ShowAtributos() << endl; break;
            case 5: j1.consultarDadosRacas(); break;
            case 6: j1.Curar();
            case 7: break;
            default : break;
        }
        system("pause");
        system("cls");

        ApresentaMenu();
        cin >> op;

        while(op <= 0 || op > 7)
        {
            cout << "Digite um número válido\n" << endl;
            cin >> op;
        }
    }

    b1.SalvarArquivo(j1);

    return 0;
}

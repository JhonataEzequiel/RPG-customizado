#include "bancoDeDados.h"
using namespace std;

void bancoDeDados::SalvarArquivo(jogador j1)
{
    if(j1.getVivo()){
        ofstream ficheiroDeDadosSaida("Personagem.txt",ios::out|ios::trunc);
        ficheiroDeDadosSaida << j1.toString();

        ficheiroDeDadosSaida.close();
        cout << "Arquivo Salvo!\n" << endl;
    }else{
        cout << "Personagem morto, arquivo não será salvo!\n" << endl;
    }
}
jogador bancoDeDados::LerArquivo()
{
    ifstream ficheiroDeDadosEntrada("Personagem.txt",ios::in);
    vector <string> conteudo;
    string linhas;
    jogador j1;

    while(!ficheiroDeDadosEntrada.eof())
    {
        getline(ficheiroDeDadosEntrada,linhas);
        conteudo.push_back(linhas);
    }

    ficheiroDeDadosEntrada.close();
    j1 = toJogador(conteudo);
    return j1;
}
jogador bancoDeDados::toJogador(vector <string> conteudo)
{
    jogador j1;
    string linhas;
    for(unsigned int i = 0; i < conteudo.size(); i++)
    {
        linhas = conteudo[i];
        switch(i)
        {
            case 0: j1.setNome(linhas); break;
            case 1: j1.setRaca(stoi(linhas)); break;
            case 2: if(stoi(linhas))j1.setVivo(true); break;
            case 3: j1.setVida(stoi(linhas)); break;
            case 4: j1.setConstituicao(stoi(linhas)); break;
            case 5: j1.setForca(stoi(linhas)); break;
            case 6: j1.setDestreza(stoi(linhas)); break;
            case 7: j1.setCarisma(stoi(linhas)); break;
            case 8: j1.setSabedoria(stoi(linhas)); break;
            case 9: j1.setInteligencia(stoi(linhas)); break;
            case 10: j1.setVidaM(stoi(linhas)); break;
            default: break;
        }
    }
    return j1;

}

#ifndef BANCODEDADOS_H
#define BANCODEDADOS_H
#include "jogador.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class bancoDeDados
{
public:
    void SalvarArquivo(jogador j1);
    jogador LerArquivo();
    jogador toJogador(vector <string> conteudo);
};


#endif // BANCODEDADOS_H

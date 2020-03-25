#ifndef JOGADOR_H
#define JOGADOR_H

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <locale.h>
#include <string>
#include <windows.h>

using namespace std;

class jogador
{
    int vida, dano, raca, vidam;

    bool vivo; //false: jogador morto, true: Jogador vivo

    int constituicao;
    int forca, destreza;
    int carisma, sabedoria;
    int inteligencia;
    string Nome;

public:
    jogador();
    void setJogador(jogador j1);
    void CalculaVida();
    void Curar();

    string getNome();
    int getVida();
    int getVidaM();
    int getRaca();
    bool getVivo();
    int getConstituicao();
    int getForca();
    int getDestreza();
    int getCarisma();
    int getSabedoria();
    int getInteligencia();

    void setNome(string n);
    void setVida(int v);
    void setRaca(int r);
    void setVivo(bool v);
    void setConstituicao(int c);
    void setForca(int f);
    void setDestreza(int d);
    void setCarisma(int c);
    void setSabedoria(int s);
    void setInteligencia(int i);
    void setVidaM(int i);

    void consultarDadosRacas();
    void CriarPersonagem();
    void UparDeLevel();
    string ShowAtributos();
    string toString();
};

#endif // JOGADOR_H

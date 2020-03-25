#include "jogador.h"

using namespace std;

jogador::jogador()
{
    vida = 0; dano = 0; raca = 0;

    vivo = false;

    constituicao = 0;
    forca = 0; destreza = 0;
    carisma = 0; sabedoria = 0;
    inteligencia = 0;
    Nome = "vazio";
}
int jogador::getVidaM()
{
    return vidam;
}
string jogador::getNome()
{
    return Nome;
}
int jogador::getVida()
{
    return vida;
}
int jogador::getRaca()
{
    return raca;
}
bool jogador::getVivo()
{
    return vivo;
}
int jogador::getConstituicao()
{
    return constituicao;
}
int jogador::getForca()
{
    return forca;
}
int jogador::getDestreza()
{
    return destreza;
}
int jogador::getCarisma()
{
    return carisma;
}
int jogador::getSabedoria()
{
    return sabedoria;
}
int jogador::getInteligencia()
{
    return inteligencia;
}
void jogador::CriarPersonagem()
{
    setlocale (LC_ALL,"portuguese");
    cout << "AVISO: Isto apagará os personagens que já existem!!!\n" << endl;
    cout << "Deseja mesmo continuar?\n1 - Sim\n2 - Não\n" << endl;

    int op, op2, dado;

    cin >> op;
    while(op <= 0 || op > 2)
    {
        cout << "Digite um número válido!\n" << endl;
        cin >> op;
    }
    if(op == 1){
        cout << "Escolha sua raça:\n" << endl;

        cout << "1 - Humano\n";
        cout << "2 - Alto Elfo\n";
        cout << "3 - Elfo do gelo\n";
        cout << "4 - Orc\n";
        cout << "5 - Anão\n";
        cout << "6 - Elfo da floresta\n" << endl;

        cin >> op2;

        while(op2 <= 0 || op2 > 6)
        {
            cout << "Digite um número válido!\n" << endl;
            cin >> op2;
        }

        switch(op2)
        {
            case 1: constituicao  = 4;
                    forca = 5;
                    destreza = 5;
                    carisma = 4;
                    sabedoria = 3;
                    inteligencia = 3;
                    break;

            case 2: constituicao  = 2;
                    forca = 2;
                    destreza = 3;
                    carisma = 3;
                    sabedoria = 6;
                    inteligencia = 6;
                    break;

            case 3: constituicao = 4;
                    forca = 3;
                    destreza = 4;
                    carisma = 2;
                    sabedoria = 5;
                    inteligencia = 6;
                    break;

            case 4: constituicao  = 6;
                    forca = 6;
                    destreza = 6;
                    carisma = 4;
                    sabedoria = 3;
                    inteligencia = 1;
                    break;

            case 5: constituicao  = 5;
                    forca = 6;
                    destreza = 3;
                    carisma = 6;
                    sabedoria = 4;
                    inteligencia = 1;
                    break;

            case 6: constituicao  = 3;
                    forca = 4;
                    destreza = 6;
                    carisma = 4;
                    sabedoria = 4;
                    inteligencia = 2;
                    break;

            default : break;

        }

        srand((unsigned)time(0));
        dado = (rand()%5) + 1;

        vida = dado + 3; vidam = vida;
        cout << "Digite o Nome dele:\n" << endl;
        cin >> Nome;
        vivo = true;
        raca = op2;
        cout << "Operação concluída!\n" << endl;
        system("pause");
        system("cls");
    }else{
        cout << "Operação abortada!\n" << endl;
        system("pause");
        system("cls");
    }
}
void jogador::consultarDadosRacas()
{
    setlocale (LC_ALL,"portuguese");
    cout << "Humano:\nconstituicao = 4\nforca = 5\ndestreza = 5\ncarisma = 4\nsabedoria = 3\ninteligencia = 3\n" << endl;
    Sleep(1000);
    cout << "Alto Elfo:\nconstituicao = 2\nforca = 2\ndestreza = 3\ncarisma = 3\nsabedoria = 6\ninteligencia = 6\n" << endl;
    Sleep(1000);
    cout << "Elfo do gelo:\n" << "constituicao  = 4\n" << "forca = 3\n" << "destreza = 4\n" << "carisma = 2\n" << "sabedoria = 5\n" << "inteligencia = 6\n" << endl;
    Sleep(1000);
    cout << "Orc:\n" << "constituicao = 6\n" << "forca = 6\n" << "destreza = 6\n" << "carisma = 4\n" << "sabedoria = 3\n" << "inteligencia = 1\n" << endl;
    Sleep(1000);
    cout << "Anão:\n" << "constituicao = 5\n" << "forca = 6\n" << "destreza = 3\n" << "carisma = 6\n" << "sabedoria = 4\n" << "inteligencia = 1\n" << endl;
    Sleep(1000);
    cout << "Elfo da floresta:\n" << "constituicao = 3\n" << "forca = 4\n""destreza = 6\n" << "carisma = 4\n" << "sabedoria = 4\n" << "inteligencia = 2\n" << endl;
}
string jogador::ShowAtributos()
{
    string atributos;
    setlocale (LC_ALL,"portuguese");
    atributos = atributos + "Vida: " + to_string(vida) + "\n";
    atributos = atributos + "Constituição: " + to_string(constituicao) + "\n";
    atributos = atributos + "Força: " + to_string(forca) + "\n";
    atributos = atributos + "Destreza: " + to_string(destreza) + "\n";
    atributos = atributos + "Carisma: " + to_string(carisma) + "\n";
    atributos = atributos + "Sabedoria: " + to_string(sabedoria) + "\n";

    switch(raca)
    {
        case 1: atributos = "Nome: " + Nome + "\n" + "Raça: " + "Humano\n"+ atributos + "Inteligencia: " + to_string(inteligencia) + "\n";
            break;
        case 2: atributos = "Nome: " + Nome + "\n" + "Raça: " + "Alto elfo\n" + atributos + "Inteligencia: " + to_string(inteligencia) + "\n";
            break;
        case 3: atributos = "Nome: " + Nome + "\n" + "Raça: " + "Elfo do gelo\n" + atributos + "Inteligencia: " + to_string(inteligencia) + "\n";
            break;
        case 4: atributos = "Nome: " + Nome + "\n" + "Raça: " + "Orc\n" + atributos + "Inteligencia: " + to_string(inteligencia) + "\n";
            break;
        case 5: atributos = "Nome: " + Nome + "\n" + "Raça: " + "Anão\n" + atributos + "Inteligencia: " + to_string(inteligencia) + "\n";
            break;
        case 6: atributos = "Nome: " + Nome + "\n" + "Raça: " + "Elfo da floresta\n" + atributos + "Inteligencia: " + to_string(inteligencia) + "\n";
            break;
        default: break;
    }

    if(vivo)
        atributos = atributos + "Status: " + "vivo\n";
    if(!vivo)
        atributos = atributos + "Status: " + "morto\n";
    atributos = atributos + "Vida máxima: " + to_string(vidam) + "\n";

    return atributos;
}
void jogador::setJogador(jogador j1)
{
    Nome = j1.getNome();
    vida = j1.getVida();
    raca = j1.getRaca();
    vivo = j1.getVivo();
    constituicao = j1.getConstituicao();
    forca = j1.getForca();
    destreza = j1.getDestreza();
    carisma = j1.getCarisma();
    sabedoria = j1.getSabedoria();
    inteligencia = j1.getInteligencia();
    vidam = j1.getVidaM();
}
string jogador::toString()
{
    string atributos;
    atributos = Nome + "\n";

    if(vivo)
    atributos = atributos + "1" + "\n";
    if(!vivo)
    atributos = atributos + "0" + "\n";

    atributos = atributos + to_string(raca) + "\n";
    atributos = atributos + to_string(vida) + "\n";
    atributos = atributos + to_string(constituicao) + "\n";
    atributos = atributos + to_string(forca) + "\n";
    atributos = atributos + to_string(destreza) + "\n";
    atributos = atributos + to_string(carisma) + "\n";
    atributos = atributos + to_string(sabedoria) + "\n";
    atributos = atributos + to_string(inteligencia) + "\n";
    atributos = atributos + to_string(vidam) + "\n";
    return atributos;
}
void jogador::UparDeLevel()
{
    int pontos = 4, op;

    while(pontos)
    {
        cout << "Você possui " << pontos << " pontos para gastar!\n" << endl;
        cout << "Escolha qual atributo quer aumentar!\n" << endl;
        cout << "1 - Força\n2 - Destreza\n3 - Carisma\n4 - Sabedoria\n5 - Inteligência\n" << endl;
        cin >> op;

        while(op <= 0 || op > 5)
        {
            cout << "Digite um número válido!\n" << endl;
            cin >> op;
        }
        switch(op)
        {
            case 1: forca++; break;
            case 2: destreza++; break;
            case 3: carisma++; break;
            case 4: sabedoria++; break;
            case 5: inteligencia++; break;
            default: break;
        }
        pontos--;
    }
    int dado;

    srand((unsigned)time(0));
    dado = (rand()%2) + 1;

    vidam += dado + constituicao;

    cout << "Aplicando melhorias!\n" << endl;
    Sleep(1000);

    cout << "Concluido!\n" << endl;
}
void jogador::CalculaVida()
{
    setlocale (LC_ALL,"portuguese");
    if(vivo)
    {
        cout << "Qual o dado que você deseja girar?\n" << endl;
        cout << "1 - 1d4\n2 - 1d6\n3 - 1d8\n4 - 1d10\n5 - 1d12\n6 - 1d20\n7 - 1d100\n" << endl;

        int op; int dado;
        cin >> op;

        while(op <= 0 || op > 7)
            {
                cout << "Digite um número válido!\n" << endl;
                cin >> op;
            }

        switch(op)
        {
            case 1: srand((unsigned)time(0));
                    dado = (rand()%4) + 1;
                    break;
            case 2: srand((unsigned)time(0));
                    dado = (rand()%6) + 1;
                    break;
            case 3: srand((unsigned)time(0));
                    dado = (rand()%8) + 1;
                    break;
            case 4: srand((unsigned)time(0));
                    dado = (rand()%10) + 1;
                    break;
            case 5: srand((unsigned)time(0));
                    dado = (rand()%12) + 1;
                    break;
            case 6: srand((unsigned)time(0));
                    dado = (rand()%20) + 1;
                    break;
            case 7: srand((unsigned)time(0));
                    dado = (rand()%100) + 1;
                    break;
            default: break;
        }

        cout << "Digite o dano dos modificadores:\n" << endl;

        int modificadores;
        cin >> modificadores;

        dano = dado + modificadores;

        vida = vida - dano;

        if(vida <= 0)
            {
                vivo = false;
                cout << "Você morreu!\n" << endl;
            }else{
                cout << "Vida atual: " << vida << "\n" << endl;
            }

    }else{
        cout << "Operação Inválida, personagem morto ou ainda não criado!\n" << endl;
    }
}
void jogador::setNome(string n)
{
    Nome = n;
}
void jogador::setVida(int v)
{
    vida = v;
}
void jogador::setRaca(int r)
{
    raca = r;
}
void jogador::setVivo(bool v)
{
    vivo = v;
}
void jogador::setConstituicao(int c)
{
    constituicao = c;
}
void jogador::setForca(int f)
{
    forca = f;
}
void jogador::setDestreza(int d)
{
    destreza = d;
}
void jogador::setCarisma(int c)
{
    carisma = c;
}
void jogador::setSabedoria(int s)
{
    sabedoria = s;
}
void jogador::setInteligencia(int i)
{
    inteligencia = i;
}
void jogador::setVidaM(int i)
{
    vidam = i;
}
void jogador::Curar()
{
    setlocale (LC_ALL,"portuguese");
    cout << "Quanto você irá receber de cura?\n" << endl;
    int cura; cin >> cura;

    vida += cura;
    if(vida >= vidam)
        vida = vidam;

    cout << "Operação concluída!\n" << endl;
}

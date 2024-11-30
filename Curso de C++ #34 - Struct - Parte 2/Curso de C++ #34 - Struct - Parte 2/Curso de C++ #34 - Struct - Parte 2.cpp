// Curso de C++ #34 - Struct - Parte 2.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
using namespace std; 

struct Carro {

    string nome;
    string cor;
    int pot;
    int velMax;
    int vel = 0; 
    void insere(string stnome, string stcor, int stpot, int stvelmax) {
        
        nome = stnome;
        cor = stcor;
        pot = stpot; 
        velMax = stvelmax; 
    }

    void mostra() {

        cout << nome << "\n" << cor << "\n" << pot << "\n" << velMax;


    }


    void mudaVel(int mv) {

        vel = mv;

        if (vel > velMax) {
            vel = velMax;
        }

        if (vel < 0) {
            vel = 0;
        }


    }
};

int main()
{
    
    Carro car1;

    car1.insere("Tornado", "vermelho", 450, 350);

    car1.mostra();

}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln

// Curso de C++ #33 - Struct - Parte 1.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
using namespace std; 

struct Carro{

    string nome;
    string cor;
    int por;
    int velMax;

};

int main()
{
    Carro car1; 
    Carro car2;

    cout << "Qual o tipo do seu carro?";
    cin >> car1.nome;

    cout << "Qual a cor do seu carro?";
    cin >> car1.cor;

    cout << "Qual a potência do carro?"; 
    cin >> car1.por; 

    cout << "Qual a velocidade max?";
    cin >> car1.velMax;

    car2.nome = "Mcquenn"; 
    car2.cor = "Vermelho"; 
    car2.por = 250; 
    car2.velMax = 260; 



    cout << car1.nome << "\n" << car1.cor<< "\n"  << car1.por << "\n" << car1.velMax;

    cout << car2.nome << "\n" << car2.cor << "\n" << car2.por << "\n" << car2 .velMax;
    cout << car1.nome << "\n" << car1.cor << "\n" << car1.por << "\n" << car1.velMax;

    
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

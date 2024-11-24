// Curso de C++ #28 - Pilha-Stack-parte1.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stack>


using namespace std;

int main()
{
    stack <string> cartas; 

    if (cartas.empty()){
        cout << "Pilha está vazia"<< "\n";
    }
    else {
        cout << "Pilha está cheia" << "\n";
    }

    cartas.push(" Rei de copas");
    cartas.push("Rei de espada");
    cartas.push("Rei de ouro");
    cartas.push("Rei de Paus"); //elemento do topo 

    /*if (cartas.size() == 0) {
        cout << "Pilha está vazia" << "\n";
    }
    else {
        cout << "Pilha está com carta" << "\n";
    }*/

    while (!cartas.empty()) {
        cartas.pop();

    }
    if (cartas.size() == 0) {
        cout << "Pilha está vazia" << "\n";
    }
    else {
        cout << "Pilha está com carta" << "\n";
    }

    cout << "Tamanho da pilha: " << cartas.size() << "\n"; 
    cout << "Carta do top " << cartas.top() << "\n";
    cartas.pop();
    cartas.pop();
    cout << "Tamanho da pilha" << cartas.size() << "\n";
    cout << "Nova carta do top " << cartas.top() << "\n";

   


   
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

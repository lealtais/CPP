// Curso de C++ #30 - FilaQueue.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
using namespace std;
#include <queue>


int main()
{
    queue <string> cartas;

    cartas.push("Rei de copas");
    cartas.push("Rei de espada");
    cartas.push("Rei de ouros");
    cartas.push("Rei de paus"); 

    cout << "Tamanho da pilha:  " << cartas.size() << "\n";
    cout << "Primeiro da fila: " << cartas.front() << "\n"; 
    cout << "Ultimo da vila: " << cartas.back() << "\n\n"; 

   while (!cartas.empty())/*enquando não for vazia*/ {

        cout << "Primeira carta: " << cartas.front() << "\n";
        cartas.pop();
        cout << "Tamanho da pilha:  " << cartas.size() << "\n";
        cout << "Primeiro da fila: " << cartas.front() << "\n";
        cout << "Ultimo da vila: " << cartas.back() << "\n\n";
    }
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

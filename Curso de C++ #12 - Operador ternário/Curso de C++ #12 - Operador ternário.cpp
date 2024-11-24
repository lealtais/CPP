// Curso de C++ #12 - Operador ternário.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
using namespace std;

int main()
{
    // (expressão) ? valor 1: valor2; 

    int n1, n2, notas,x;
    string res; 
    x = 5; 

    cout << "Digite um valor: ";
    cin >> n1;

  /*
    //(notas >= 60) ? res = "Aptovado" : res = "Reprovado";

    res = (notas >= 60) ? "Aprovado" : "reprovado";

    cout << "Situacão do aluno: " << res << "\n"; 
    */

    (n1 >= 10) ? x++ : x--; 

    cout << "\n valor de xe x: " << x << "\n";
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

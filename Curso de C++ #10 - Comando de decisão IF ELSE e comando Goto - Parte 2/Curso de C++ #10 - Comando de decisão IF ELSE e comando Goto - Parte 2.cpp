// Curso de C++ #10 - Comando de decisão IF ELSE e comando Goto - Parte 2.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <cstdlib>

using namespace std; 

int main()
{
    int n1, n2, res;
    char opc; 

    inicio: 

    system("cls"); 

    cout << "Digite o valor da nota 1: ";
    cin >> n1; 

    cout << "Digite o valor da nota 2"; 
    cin >> n2; 

    res = n1 + n2;
    /* > = 60  Aprovado
       >= 40 e <60 Recuperação
       < 40 reprovado */ 
    if (res >= 60) {
        cout << "\n Aluno aprovado :)";
    } else if (res >= 40 && res < 60 ) {
        cout << "\n Aluno em recuperação :/";
    }
    else {
        cout << "\n Aluno reprovado:(";
    }
    cout << "\n Digitar outras notas? (n/s)";
        cin >> opc;

        if (opc == 's' or opc == 'S') {
            goto inicio; 
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

// Curso de C++ #22 - Funções - Parte 1.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
using namespace std;

void texto();
void soma();
int soma2(int n1, int n2);
void tr(string tra[4]); // prototipo da função

int main()
{
    int res; 
    soma();
    texto(); 
    string transporte[4] = { "Carros", "Motos", "aviao", "barco" };
    res = soma2(175, 25); 
    tr(transporte); // chamando a função tr passando pra ela o vetor transporte como pãrametro 

    cout << "Valor da soma: 0" << res << "\n"; 
    cout << "Valor de res: " << soma2(175, 25) << "\n"; //outra maneira de ser feita
}

void texto(){
    cout << "Canal Fessor Bruno";
}

void soma() {
    
    int n1, n2; 
    cout << "Escreva um numero: "; 
    cin >> n1;
    cout << "Escreva outro: ";
    cin >> n2;

    cout << "Soma dos valores: " << n1 + n2;

}

int soma2(int n1, int n2) {

    return n1 + n2;
}

void tr(string tra[4]) {

    for(int i=0;i < 4;i++) { //pecorrendo os vetores
        cout << tra[i] << "\n"; 
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

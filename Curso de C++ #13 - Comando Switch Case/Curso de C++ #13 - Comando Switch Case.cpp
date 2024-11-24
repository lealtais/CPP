// Curso de C++ #13 - Comando Switch Case.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
using namespace std; 

int main()
{

	int val;

	cout <<  "Selecione uma cor";
	cout << "\n 1 - Carro , \n 2 - Moto \n 3 - Aviao \n 4- Helicoptero \n";
		cin >> val;


	switch (val)
	{
	   case 1:
	   case 2:
		   cout << "Transporte terrestre \n";
				switch (val)
				{
				case 1:
					cout << "Carro selecionado \n";
					break;
				case 2 : 
					cout << "Moto selecionado";
					break;
				};
			break;
		case 4:
		case 5:
			cout << "Transporte aereo  \n";
			switch (val)
			{
			case 3:
				cout << "Avial selecionado \n";
					break;
			case 4:
				cout << "Helicoptero \n";
				break;
			}
			break;

	   default:
		cout << "Valor selecionado invalido \n ";
		break;
	}

	cout << "Fibal iazo";

  
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

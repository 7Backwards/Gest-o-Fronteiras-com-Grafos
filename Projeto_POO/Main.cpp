#include "Grafo.h"

int main()
{
	int opcao;
	cout << "Inicio do programa." << endl;
	const string XML = "Ola.xml"; //nome do ficheiro xml
	Grafo *GF;
	GF = new Grafo(); //cria o grafo
	GF->Load("grafo_1-C1.txt", "pessoas.txt"); //l� os dados dos ficheiros
	do {
		opcao = GF->Menu();
		GF->TrataMenu(opcao);
	} while (opcao != 0); //l� as op�oes escolhidas pelo utilizador enquanto n�o introduzir o valor 0
	delete GF; //liberta a memoria ocupada pelo grafo
	cout << "Fim do programa." << endl;
	cout << "Press any key to continue..." << endl;  //Alternativa ao system("pause"),
	cin.ignore();                                    // visto ser uma fun��o dependendo do OS
	getchar();                                       // e que estava a causar memory leaks.
	return 1;
}
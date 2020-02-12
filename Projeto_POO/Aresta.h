#pragma once
#include "Fronteira.h"
class Aresta
{
	int Origem, Destino;		//Pontos delimitadores da aresta.
	double Preco;				//Custo de passagem.

public:
	Aresta(int origem, int destino, double preco); //contrutor da aresta
	~Aresta(void); //destrutor da aresta
	void Mostrar(); //Mostra as informa�oes de cada aresta
	int GetOrigem(); //d� return da origem da aresta
	int GetDestino(); //d� return do destino da aresta
	double GetPreco(); //d� return do pre�o de uma aresta
	int Memoria(); //d� return do espa�o ocupado por cada aresta
};


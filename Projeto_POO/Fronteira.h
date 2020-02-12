#pragma once
#include "Pessoa.h"


using namespace std;
class Aresta;
class Fronteira
{
	int X, Y, contador; //coordenadas das fronteiras e contador do numero de pessoas que ja la passaram
	list<Aresta *> Adj; //lista de arestas adjacentes � fronteira

public:
	Fronteira(int cx, int cy); //construtor da fronteira
	~Fronteira(void); //destrutor da fronteira
	virtual int GetTipo(); //d� return do tipo de cada fronteira usando o virtual
	virtual int GetPeso(); //d� return do peso (se houver) de cada fronteira usando o virtual
	virtual void Mostrar(); //d� return do tipo de cada fronteira usando o virtual
	int Memoria(); //d� return da memoria ocupada por cada fronteira
	int Getcontador(); //d� return do numero de pessoas que j� passaram na fronteira
	int GetCoordX(); //d� return da coordenada x da fronteira
	int GetCoordY(); //d� return da coordenada y da fronteira
	void Addadj(Aresta *novo); //adiciona uma aresta � lista de arestas adjcentes de uma fronteira
	list < Aresta*> GetFronteiraAdjacente(); //d� return da lista de arestas adjacentes de uma fronteira
	virtual int Getcusto() { return 0; } //d� return do custo (se houver) ao atravessae cada fronteira usando o virtual
	void LimparAdj(); //limpa a lista de arestas adjacentes de uma fronteira
	void Setcontador(); //incrementa o numero de pessoas que atravessaram uma fronteira
};


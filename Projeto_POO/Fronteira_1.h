#pragma once
#include "fronteira.h"
class Fronteira_1 :
	public Fronteira
{
public:
	Fronteira_1(int cx, int cy); //construtor de uma fronteira do tipo 1
	~Fronteira_1(void); //destrutor de uma fronteira do tipo 1
	int GetTipo(); //d� return do tipo de fronteira
	void Mostrar(); //mostra as infroma��es de uma fronteira
	int Getcusto(); //d� return do custo ao atravessar uma fronteira
};


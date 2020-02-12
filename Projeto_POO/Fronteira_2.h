#pragma once
#include "fronteira.h"
class Fronteira_2 :
	public Fronteira
{
public:
	Fronteira_2(int cx, int cy); //construtor de uma fronteira do tipo 2
	~Fronteira_2(void); //destrutor de uma fronteira do tipo 2
	int GetTipo(); //d� return do tipo de fronteira
	int GetPeso(); //d� return do peso que tem de levar ao atravessar uma fronteira
	void Mostrar(); //mostra as infroma��es de uma fronteira
	int Getcusto(); //d� return do custo ao atravessar uma fronteira
};


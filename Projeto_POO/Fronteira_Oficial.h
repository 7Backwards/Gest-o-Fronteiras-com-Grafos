#pragma once
#include "fronteira.h"
class Fronteira_Oficial :
	public Fronteira
{
public:
	Fronteira_Oficial(int cx, int cy); //construtor de uma fronteira oficial
	~Fronteira_Oficial(void); //destrutor de uma fronteira oficial
	int GetTipo(); //d� return do tipo de fronteira
	void Mostrar(); //mostra as infroma��es de uma fronteira
};


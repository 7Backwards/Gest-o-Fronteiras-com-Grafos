#pragma once
#include "Aresta.h"
#include "Fronteira_1.h"
#include "Fronteira_2.h"
#include "Fronteira_Oficial.h"

class Grafo
{
	map<int, Pessoa *> *Lista_Pessoas; //map com o id das pessoas e as suas inform�oes
	map<int, Fronteira *> *FT; //Utilizado para definir v�rias fronteiras do grafo.
	list<Aresta *> *Lista_Aresta; //Lista de arestas do grafo.
public:
	Grafo(); //Construtor do grafo

	//Implemente o destrutor do Grafo;
	~Grafo();

	//Carregar os dados de ficheiros (do grafo e de pessoas);
	bool Load(const string &fich_grafo, const string &fich_pessoas);

	//Mostra a lista das pessoas lidas
	void MostrarPessoas();

	void MostrarFronteiras(); //Mostra a lista das fronteiras

	void MostrarArestas(); //Mostra a lista das arestas

	//Contar o n�mero de n�s/fronteiras do grafo;
	int ContarNos();

	//Contar o n�mero de arestas/arcos do grafo;
	int ContarArcos();

	//Determinar toda a mem�ria ocupada;
	int Memoria();

	//Determinar qual o n�/fronteira que tem mais arcos/aresta, se existirem v�rios devolve uma lista deles;
	list<int> *NoMaisArcos();

	//Verificar se um n� � adjacente de outro n� do Grafo;
	bool Adjacencia(int v1, int v2);

	//Determinar um caminho(n�o interessa se � o mais r�pido!, � qualquer um!) de um n�/fronteira para outro.... //devolvendo o custo total;
	list<int> *Caminho(int v1, int v2, double &custo_total);

	//Determinar quais os v�rtices que est�o isolados (Um v�rtice � isolado se n�o existe nenhum caminho at� ele!);
	list<int> *VerticesIsolados();

	//Verificar se um dado v�rtice existe
	bool Search(int v);

	//Remover um dado v�rtice, tamb�m ser� necess�rio remover todas as arestas;
	bool RemoverVertice(int v);

	//Remover a aresta que liga 2 v�rtices;
	bool RemoverAresta(int v1, int v2);

	//Gravar para ficheiro em formato XML todas as informa��es do Grafo;
	void EscreverXML(const string &s);

	//Ler de um ficheiro em formato XML todo o Grafo (antes de ler deve ser apagado tudo o que estiver no Grafo); Se leu corretamente devolve //true, sen�o devolve false;
	bool LerXML(const string &s);

	//Devolver uma lista de todos os v�rtices/fronteiras de um dado tipo;
	list<int> *DevolveVerticesTipo(const string &tipo);

	//Determinar o caminho m�nimo entre 2 n�s, devolvendo o custo total;
	list<int> *CaminhoMinimo(int v1, int v2, double &custo_total);

	//Determinar o caminho m�ximo entre 2 n�s (passando somente uma vez em cada v�rtice), devolvendo o custo total;
	list<int> *CaminhoMaximo(int v1, int v2, double &custo_total);

	//Ser� poss�vel ir de uma fronteira(v1) a outra(v2), passando somente por fronteiras de um dado tipo?
	bool PossivelCaminho(int v1, int v2, int TipoFronteira);

	//Assumindo que todas as pessoas (do ficheiro) andaram em viagem, qual foi a fronteira com menos tr�fego/visitas? (No caso de serem v�rias,// deve devolver uma lista com as fronteiras);
	void FronteirasMenosVisitadas(list<int> &Lv);

	//Dada uma fronteira (v1), determinar todas as fronteiras onde n�o � poss�vel chegar apartir de v1. Deve devolver uma lista dessas fronteiras!;
	void SitiosInacessiveisAPartirDe(int V1, list<int> &Lv);

	//Ser� poss�vel ir de uma fronteira(v1) a outra(v2), passando por qualquer tipo de fronteiras?
	bool PossivelCaminho_Independente_Tipo(int v1, int v2);

	//Fun��o que mostra o menu
	int Menu();

	//Fun��o que verifica qual a op��o do menu selecionada
	void TrataMenu(int opcao);
};
/* 
FACULDADE PITAGORAS - Unidade BETIM
-----------------------------------------------------
Curso: Ci�ncia da Computa��o
Disciplina: Algoritmos e Estrutura de Dados Avan�ado
Autor: Cristiano Martins Nunes� - Abril\2.019
Vers�o: 1.0 
-----------------------------------------------------
*/

#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	// Defini��o de Caracter
	setlocale(LC_ALL, "Portuguese");
	
	// Vari�vel
	int vertice = 0, lv, cv, opcao;
	char alfabeto[26] = {' ','A','B','C','D','E','F'};
	
	// Sa�da de dados
	cout << "\n------------------------------ "
	     << "\n GRAFO - MATRIZ DE ADJAC�NCIA "
		 << "\n------------------------------\n";

	
	// Entrada de dados
	cout << "\n-> Informe o N�mero de V�rtices do Grafo: ";
	cin >> vertice;

	// Matriz grafo[][]
    int grafo[vertice][vertice];
	
	// Opera��o grafo[][] = 0
	for(int linha=1; linha<=vertice; linha++)
	{
		for(int coluna=1; coluna<=vertice; coluna++)
		{
			grafo[linha][coluna] = 0;
		}
		
	}
	
	// Sa�da de dados - Imprime alfabeto coluna
	cout << "\n" << "  ";
	
	for(int i=1; i<=vertice; i++)
	{
		cout << alfabeto[i] << " ";
	}
	
	cout << "\n";

	// Sa�da de dados - Imprime Matriz grafo[][]
	for(int linha=1; linha<=vertice; linha++)
	{
		// Sa�da de dados - Imprime alfabeto linha
		cout << alfabeto[linha] << " ";
		
		for(int coluna=1; coluna<=vertice; coluna++)
		{	
			cout <<grafo[linha][coluna] << " ";
		}
		
		cout << "\n";	
	}
	
	cout << "\n";
	

	// Entrada de dados - Menu Principal
	do{
		
		cout << "-> Informe a Linha  do V�rtice: ";
		cin >> lv;
		cout << "-> Informe a Coluna do V�rtice: ";
		cin >> cv;
		grafo[lv][cv] = 1;
		cout << "\n-> Digite [1] p/continuar a inser��o ou [2] p/encerrar: ";
		cin >> opcao;
		cout << "\n";
		
	}while(opcao !=2);
	
	
	// Sa�da de dados - Imprime Matriz
	cout << "----- Matriz de Adjac�ncia do Grafo -----\n";

	// Sa�da de dados - Imprime alfabeto coluna
	cout << "\n" << "  ";
	for(int i=1; i<=vertice; i++)
	{
		cout << alfabeto[i] << " ";
	}
	
	cout << "\n";
	
	// Sa�da de dados - Imprime Matriz grafo[][]
	for(int linha=1; linha<=vertice; linha++)
	{
		// Sa�da de dados - Imprime alfabeto linha
		cout << alfabeto[linha] << " ";
		
		for(int coluna=1; coluna<=vertice; coluna++)
		{	
			cout <<grafo[linha][coluna] << " ";
		}
		
		cout << "\n";	
	}
	
	cout << "\n";

	// Sa�da de dados - Imprime Grafo
	cout << "----- Grafo: V�rtice x Aresta -----\n\n";

	// 	// Sa�da de dados - Imprime Matriz grafo[][]
	for(int linha=1; linha<=vertice; linha++)
	{
		for(int coluna=1; coluna<=vertice; coluna++)
		{	
			if(grafo[linha][coluna] == 1)
			{
				cout << "v(" << alfabeto[linha] << ")---v(" << alfabeto[coluna] << ")" << "\n"; 
			}
		}	
	}
	
	cout <<  "\n";
	
	// Fim
	system("PAUSE");
    return EXIT_SUCCESS;
	
}

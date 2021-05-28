/* 
FACULDADE PITAGORAS - Unidade BETIM
-----------------------------------------------------
Curso: Ciência da Computação
Disciplina: Algoritmos e Estrutura de Dados Avançado
Autor: Cristiano Martins Nunes® - Abril\2.019
Versão: 1.0 
-----------------------------------------------------
*/

#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	// Definição de Caracter
	setlocale(LC_ALL, "Portuguese");
	
	// Variável
	int vertice = 0, lv, cv, opcao;
	char alfabeto[26] = {' ','A','B','C','D','E','F'};
	
	// Saída de dados
	cout << "\n------------------------------ "
	     << "\n GRAFO - MATRIZ DE ADJACÊNCIA "
		 << "\n------------------------------\n";

	
	// Entrada de dados
	cout << "\n-> Informe o Número de Vértices do Grafo: ";
	cin >> vertice;

	// Matriz grafo[][]
    int grafo[vertice][vertice];
	
	// Operação grafo[][] = 0
	for(int linha=1; linha<=vertice; linha++)
	{
		for(int coluna=1; coluna<=vertice; coluna++)
		{
			grafo[linha][coluna] = 0;
		}
		
	}
	
	// Saída de dados - Imprime alfabeto coluna
	cout << "\n" << "  ";
	
	for(int i=1; i<=vertice; i++)
	{
		cout << alfabeto[i] << " ";
	}
	
	cout << "\n";

	// Saída de dados - Imprime Matriz grafo[][]
	for(int linha=1; linha<=vertice; linha++)
	{
		// Saída de dados - Imprime alfabeto linha
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
		
		cout << "-> Informe a Linha  do Vértice: ";
		cin >> lv;
		cout << "-> Informe a Coluna do Vértice: ";
		cin >> cv;
		grafo[lv][cv] = 1;
		cout << "\n-> Digite [1] p/continuar a inserção ou [2] p/encerrar: ";
		cin >> opcao;
		cout << "\n";
		
	}while(opcao !=2);
	
	
	// Saída de dados - Imprime Matriz
	cout << "----- Matriz de Adjacência do Grafo -----\n";

	// Saída de dados - Imprime alfabeto coluna
	cout << "\n" << "  ";
	for(int i=1; i<=vertice; i++)
	{
		cout << alfabeto[i] << " ";
	}
	
	cout << "\n";
	
	// Saída de dados - Imprime Matriz grafo[][]
	for(int linha=1; linha<=vertice; linha++)
	{
		// Saída de dados - Imprime alfabeto linha
		cout << alfabeto[linha] << " ";
		
		for(int coluna=1; coluna<=vertice; coluna++)
		{	
			cout <<grafo[linha][coluna] << " ";
		}
		
		cout << "\n";	
	}
	
	cout << "\n";

	// Saída de dados - Imprime Grafo
	cout << "----- Grafo: Vértice x Aresta -----\n\n";

	// 	// Saída de dados - Imprime Matriz grafo[][]
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

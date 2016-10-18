#include <iostream>
#include <fstream>
#include <cstdlib>
#include <stdio.h>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;


class MT
{
	private:
		
		struct t_upla
		{
			int estado;
			char entrada;
			char escribe;
			char movimiento;
			int est_siguiente;
		} *tupla;		
		
		int n_estados;
		int est_final;
		int n_tuplas;
		int estado_actual;
		
		
	public:
		
		MT();
		~MT();
		void cargarmaquina(char nombre_fichero[]);
		void mostrarmaquina();
		void simular_maquina();
	
};

int main (void)
{
	MT A;
	char n_fich[50];
	
	cout << "introduce nombre fichero";
	cin >> n_fich;
	
	A.cargarmaquina(n_fich);
	A.mostrarmaquina();
	A.simular_maquina();
	system("PAUSE");
	
}

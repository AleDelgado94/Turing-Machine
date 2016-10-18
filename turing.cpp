#include "turing.hpp"


MT::MT()
{
}

MT::~MT(){
}

void MT::cargarmaquina(char nombre_fichero[])
{
	ifstream fich;
	fich.open(nombre_fichero);
	
	if(fich.is_open())
	{
		fich >> n_estados >> est_final >> n_tuplas;
		tupla = new t_upla [n_tuplas];
		for (int i=0; i<n_tuplas; i++)
		{
			fich >> tupla->estado[i] >> tupla->entrada[i] >> tupla->escribe[i] >> tupla->movimiento[i] >> tupla->est_siguiente[i];
		}
		cout << "Fichero CARGADO!!"
	}
	else
		cout << "Fichero NO Cargado!!"
}

void MT::mostrarmaquina()
{
	cout << "La máquina de Turing introducida es la siguiente: " << endl
	cout << "Numero estados: " << n_estados << endl;
	cout << "Estado final: " << est_final << endl;
	cout << "Numero de t-uplas: " << n_tuplas << endl;
	for (int i=0; i<n_tuplas; i++)
		{
			cout << tupla->estado[i] << tupla->entrada[i] << tupla->escribe[i] << tupla->movimiento[i] << tupla->est_siguiente[i];
		}
	 
}

void MT::simular_maquina()
{
	char cadena[100]
	int opcion;
	
	cout << "Introduzca una cadena: ";
	cin >> cadena;
	
	cout << "Desea ver el procedimiento? (0-Sí 1-No): ";
	cin >> opcion;
	
	if(opcion == 1)
	{
		char *c;
		estado_actual = 0;
		while (*c == '$')
		{
			c++;
		}
		
		int transicion;
		
		while(transicion < n_tuplas)
		{
			if(estado_actual=tupla[transicion]->estado)
			{
				if(*c==tupla[transicion]->entrada)
				{
					*c=tupla[transicion]->escribe;
					estado_actual = tupla[transicion]->est_siguiente;
					
					if(tupla[transicion]->movimiento == 'R')
					c++;
					else if (tupla[transicion]->movimiento == 'L')
					c--;
					
					
				}
				else transicion++;
			}else transicion++;
		}
		
		if(estado_actual>=est_final)
		cout << "CADENA ACEPTADA" << endl;
		else
		cout << "CADENA NO ACEPTADA" << endl;
	}
	
		
}

#include "iostream"
#include <math.h>
#include "stdlib.h"

using namespace std;

int main()
{
	int vector[5];
	int otroVector[5];


	/// Bucle de Ingreso de Datos
	for(int indice1=0;indice1<=4;indice1++)
	{
		cout<<"Ingrese numero"<<endl;
		cin>>vector[indice1];
	}

	/// Blucle de Copiado y multiplicacion
	for(int indice2=0;indice2<=4;indice2++)
	{

		otroVector[indice2] = vector[indice2]*2;
        cout<<"El Resultado es: "<<otroVector[indice2]<<endl;
	}

    return 0;
}



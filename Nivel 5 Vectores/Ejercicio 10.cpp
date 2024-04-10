#include "iostream"
#include <math.h>
#include "stdlib.h"

using namespace std;

int main()
{

	int suma=0;
	float resultado;
	int indice,indice2,cantidad;

    cout<<"Ingrese cantidad"<<endl;
    cin>>cantidad;
    int vector[cantidad];

	for(indice=0;indice<=cantidad-1;indice++)
	{
		cout<<"Ingrese numero"<<endl;
		cin>>vector[indice];
	}

    for(indice2=0;indice2<=cantidad-1;indice2++)
	{
        suma = suma + vector[indice2];

	}

	resultado=(float)suma/cantidad;

	cout<<"El resultado es: "<<resultado<<endl;

    return 0;
}


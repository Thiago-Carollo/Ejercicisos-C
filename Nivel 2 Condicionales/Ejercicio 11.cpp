#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int cantidadllantas,total;
	
	cout<<"Ingres la cantidad de llantas"<<endl;
	cin>>cantidadllantas;
	
	if (cantidadllantas<5)
	{
		total=cantidadllantas*800;
		cout<<"El precio total de las llantas es de "<<total<<endl;
	}
	else
	{
		if(cantidadllantas>=5)
		{
			total=cantidadllantas*700;
			cout<<"El precio total de las llantas es de "<<total<<endl;
		}
	}
	
	return 0;
}



#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int compra,descuento;
	
	cout<<"Ingrese el monto de la compra"<<endl;
	cin>>compra;
	
	if (compra>1000)
	{
		descuento=compra/02.0;
		cout<<"El precio es "<<"$"<<descuento<<endl;
	}
	else
	{
		cout<<"El precio es "<<"$"<<compra<<endl;
	}
	
	return 0;
}


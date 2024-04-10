#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int compra,numero,descuento;
	
	cout<<"Ingrese el precio de la compra"<<endl;
	cin>>compra;
	cout<<"Ingrese el numero que le toco "<<endl;
	cin>>numero;
	
	if(numero<74)
	{
		descuento=compra/0.15;
		cout<<"El descuento es de "<<descuento<<endl;
	}
	else 
	{
		if(numero>=74)
		{
			descuento=compra/0.20;
			cout<<"El descuento es de "<<descuento<<endl;
		}
	}
	
	return 0;
}


#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int camisa, precio;
	int preciot, preciot1, preciot2;
	
	cout<<"Ingrese la cantidad de camisas "<<endl;
	cin>>camisa;
	cout<<"Ingrese el precio de 1 camisa"<<endl;
	cin>>precio;
	
	//mas de 3 camisas 20% de descuebto sobre el total
	//menos de 3 camisas 10% de descuebto sobre el total
	//1camisa=precio
	
	if (camisa>=3)
	{
		preciot=camisa+precio;
		preciot1=preciot/0.20;
		cout<<"El precio es "<<preciot1;		
	}
	else
	{
		if(camisa<=3)
		{
			preciot=camisa+precio;
			preciot2=preciot/0.10;
			cout<<"El precio es "<<preciot2;
		}
	}
	
	return 0;
}



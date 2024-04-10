#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int num1,num2,suma;
	
	cout<<"Ingrese 2 numeros"<<endl;
	cin>>num1;
	cin>>num2;
	
	suma=num1+num2;
	if (suma>10)
	{
		cout<<"La suma es: "<<suma<<endl;
	}
	else
	{
		cout<<"No se puede mostrar la suma"<<endl;
	}
	return 0;
}



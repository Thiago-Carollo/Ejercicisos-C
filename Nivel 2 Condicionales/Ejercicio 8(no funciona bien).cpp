#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int edad;
	char nombre[]="nombre";
	char sexo[]="masculino";
	char masculino;
	
	cout<<"Ingrese su nombre "<<endl;
	cin>>nombre;
	cout<<"Ingrese su edad "<<endl;
	cin>>edad;
	cout<<"Ingrese su sexo "<<endl;
	cin>>sexo;
	//sexo[]=masculino;
	if (edad>=18)
	{
		cout<<"El nombre es "<<nombre<<endl;
		cout<<"La edad es "<<edad<<endl;
		cout<<"El sexo es "<<sexo<<endl;
	}
	else
	{
		cout<<" No es masculino "<<endl;
		
	}
	
	
	return 0;
}


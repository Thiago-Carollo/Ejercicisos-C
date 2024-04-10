#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int num1=0;
	int num2=0;
	int cont;
	cout<<"Ingrese un numero"<<endl;
	cin>>num1;
	cout<<"Ingrese hasta que numero"<<endl;
	cin>>num2;
	
	for (cont=num1;cont<=num2;cont++)
	{
		cout<<"El resultado es: "<<cont<<endl;
	}
	
	return 0;
}

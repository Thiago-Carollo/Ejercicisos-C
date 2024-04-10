#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int num1, num2;
	int i;
	int suma=0;
	
	cout<<"Ingrese desde que numero"<<endl;
	cin>>num1;
	cout<<"Ingrese hasta que numero"<<endl;
	cin>>num2;
	
	for(i=num1;i<=num2;i++)
	{
		suma=suma+i;
	}
	
	cout<<"El resultado de la suma es: "<<suma<<endl;
	
	return 0;
}


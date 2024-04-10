#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int c, n, numero[n], suma;
	float promedio;
	suma = 0;
	cout<<"Ingresa el numero de elementos"<<endl;
	cin>>n;
	for (c=0; c<=n; ++c)
	{
		cout<<"Ingresa un numero";
		cin>>numero[c];
		suma = suma + numero[c];
	}
	
	promedio = suma/n;
	cout<<"Lo numeros ingresados son:"<<endl;
	
	for (c=0; c <=n; ++c)
	{
		cout<<numero[c];
	}
	cout<<"La media es: "<<promedio<<endl;;
	

    return 0;
}

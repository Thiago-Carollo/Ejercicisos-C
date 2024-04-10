#include <iostream>
#include <math.h>

using namespace std;
	
int main ()
{
	float numero,suma,promedio;
	float contador=0;
	cout << "Ingrse el numero: "<<endl;
	cin >> numero;
	while (numero != 0)
	{
	suma= suma + numero;
	contador=contador+1 ;
	cout << "Ingrse el numero: "<<endl;
	cin >> numero;
	}
	promedio= suma / contador;
	cout<< "El promedio es: "<< promedio <<endl;

	return 0;
}

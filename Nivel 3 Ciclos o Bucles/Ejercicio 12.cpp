#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n=0;
	int m=0;
	int suma;
	
	cout<<"Ingrese un numero"<<endl;
	cin>>n;
	cout<<"Ingrese hasta que numero"<<endl;
	cin>>m;
	
    while(n<=m)
    {
        if(n%2!=0)
        suma=suma+1; n=n+1;       
    }
    cout<<"El Resultado es: "<<suma<<endl;
    
	return 0;
}

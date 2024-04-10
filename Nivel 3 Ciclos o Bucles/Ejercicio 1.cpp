#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int num,lol,suma;
	suma=0;
	cout<<"Ingrese la n cantida"<<endl;
	cin>>num;
	for(int i=0;i<num;i++)
	{
        cout<<"ingrese numero"<<endl;
        cin>>lol;
        suma=suma+lol;
	}
	cout<<"RTS"<<suma<<endl;
	return 0;
}

#include "iostream"
#include <math.h>
#include "stdlib.h"

using namespace std;

int main()
{
	int vector1[10];
	int vector2[5];
	int vectorTotal[10];
	int i=0;
	int k=0;
	int indice=0;

	for(i=0;i<=4;i++)
	{
		cout<<"Ingrese un numero"<<endl;
		cin>>vector1[i];
	}


		for(k=0;k<=4;k++)
	{
		cout<<"Ingrese un numero"<<endl;
		cin>>vector2[k];
	}

	for(int j=0; j<=4; j++)
    {
        vectorTotal[indice] = vector1[j];
        vectorTotal[indice+1] = vector2[j];

        indice = indice + 2 ;

    }

 	for(int j=0; j<=9; j++)
    {
        cout<<"El valor es: "<<vectorTotal[j]<<endl;
    }

    return 0;
}

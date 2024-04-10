#include "iostream"
#include <math.h>
#include "stdlib.h"

using namespace std;

int main()
{
    const int MAXNUM=100;
	int mivector[(int)MAXNUM/2];
    int indice = 0;


 // Rellado de array con numeros impares ascendentes
	for(int i=1;i<=MAXNUM;i=i+2)
    {
        if (i%2!=0)
		{
            mivector[indice]= i;
            indice++;
        }
    }

// impresion de los numeros impares en orden descendente
	for(int j=(int)MAXNUM/2-1; j>=0; j--)
    {

        cout<<"El  numero es: "<<mivector[j]<<endl;
    }

    return 0;
}


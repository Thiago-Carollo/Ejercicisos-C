#include "iostream"
#include <math.h>
#include "stdlib.h"

using namespace std;

int main()
{
	int mivector[100];
    int indice = 0;
    int suma=0;
// opcion con for y formula para indice
//	for(int i=0;i<=201;i++)
//    {
//        if (i%2==0)
//		{
//            mivector[i/2-1]= i;
//
//        }
//    }
 // opcion con for de a pares e indice con contador
	for(int i=2;i<=200;i=i+2)
    {
        if (i%2==0)
		{
            mivector[indice]= i;
            indice++;
        }
    }


	for(int j=0; j<=99; j++)
    {
    	suma=suma + mivector[j];
        cout<<"El  "<<j<<" es: "<<mivector[j]<<endl;
    }
    cout<<"El resultado es: "<<suma<<endl;
    return 0;
}


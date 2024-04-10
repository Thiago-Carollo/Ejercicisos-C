#include "iostream"
#include <math.h>
#include "stdlib.h"

using namespace std;

int main()
{
	int mivector[10];
    int indice = 0;
	for(int i=1;i<=20;i++)
    {
        if (i%2==0) {
            mivector[i/2-1]= i;
            indice +=1;
        }
    }


	for(int j=0; j<=9; j++)
    {

        cout<<"El valor es: "<<mivector[j]<<endl;
    }
    return 0;
}

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int num,i;
	int a=0;
	int suma;
	
	cout<<"Ingrese un numeros"<<endl;
	cin>>num;
	
	for(i=1;i<(num+1);i++)
	{
		if(num%i==0)
		{	
        	a++;
        }
    }
    if(a!=2)
    {	
	for(int i=1;i<=num;i++)
	{
	    if(i%2==0)
        {
         cout<<"-"<<i;
         suma=suma+i;
        }
	}
	
	}
	
	return 0;
}


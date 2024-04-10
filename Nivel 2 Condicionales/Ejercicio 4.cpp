#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int num1,num2,num3,mayor;
	
	cout<<"Ingrese 3 numeros"<<endl;
	cin>>num1;
	cin>>num2;
	cin>>num3;
	
	if(num1>=num2 &&num1>num3)
	{
		cout<<"El numero mayor es: "<<num1<<endl;
	}
	else 
	{
		if(num2>num3)
		{
			cout<<"El numero mayor es: "<<num2<<endl;

		}
		else 
		{
			cout<<"El numero mayor es: "<<num1<<endl;

		}
	}
	
	return 0;
}



#include <iostream>
#include <math.h>


using namespace std;

int main()
{
	int num1,num2;
	
	cout<<"Ingrese 2 numero"<<endl;
	cin>>num1;
	cin>>num2;
	
	if(num1>num2)
	{
		cout<<"El numero mayor es: "<<num1<<endl;
	}
	else 
	{
		if(num2<num1)
		{
			cout<<"El numero menor es: "<<num2<<endl;
		}
		else
		{
			cout<<"El numero menor es "<<num1<<endl;
		}
	}
	
	return 0;
}

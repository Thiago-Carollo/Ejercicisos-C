#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int num1,num2,num3;
	
	cout<<"Ingrese 3 numeros"<<endl;
	cin>>num1;
	cin>>num2;
	cin>>num3;
	
	if(num1!=num2 && num1!=num3 && num2!=num3)
	{
		if(num1<num2 && num1<num3)
		{
		   if(num2<num3)
		  {   
		  	cout<<"Los Numeros estan en orden"<<endl;
		  }
		}
	}
	
	return 0;
}


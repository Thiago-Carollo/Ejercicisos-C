#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int num;
	
	cout<<"Ingrese un numero para saber si es par, impar o cero "<<endl;
	cin>>num;

if(num==0) 
{ 
cout<<"el numero es cero"; 
} 
else 
{ 

if(num%2==0) 
{ 
cout<<"el numero es par"; 
} 

else 
{ 
cout<<"el numero es impar"; 
} 
} 

	return 0;
	}


#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int apr, rep,prom, cal1, cal2, cal3;
	
	cout<<"Ingrese 3 Notas: "<<endl;
	cin>>cal1;
	cin>>cal2;
	cin>>cal3;
	prom=(cal1+cal2+cal3)/3;
	if (prom>=10.5)
	{
		cout<<"APROBADO"<<endl;
	}
	else
	{
		cout<<"DESAPROBADO"<<endl;
	}
	
	return 0;
}


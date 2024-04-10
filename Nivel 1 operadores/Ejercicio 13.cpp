#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float h, m;
	float poh, pom;
	cout<<"ingrese la cantidad de hombres en el curso "<<endl;
	cin>>h;
	cout<<"ingrese la cantidad de mujeres en le curso en el curso "<<endl;
	cin>>m;
	//po1=(((float)per1)/((float)100));
	//po2=(((float)per2)/((float)100));   	
	poh=(((float)h)/((float)100));
	pom=(((float)m)/((float)100));
	cout<<"El porcentaje de Hombres en el curso es de: "<<poh<<endl;
	cout<<"El porcentaje de Mujeres en el curso es de: "<<pom<<endl;
		
	return 0;
}



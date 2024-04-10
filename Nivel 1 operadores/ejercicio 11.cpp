#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float h,m,s;
	float hs,ms,ss;
	cout<<"Ingrese la hora, minutos, segundos"<<endl;
	cin>>h;
	cin>>m;
	cin>>s;
	//1h=3600s
	//1m=60s
	hs=h/3600;
	ms=m/60;
	ss=s;
	cout<<"la cantidad de horas en segundos es: "<<hs<<endl;
	cout<<"la cantidad de minutos en segundos es: "<<ms<<endl;
	cout<<"la cantidad de segundos es: "<<ss<<endl;
	return 0;
}


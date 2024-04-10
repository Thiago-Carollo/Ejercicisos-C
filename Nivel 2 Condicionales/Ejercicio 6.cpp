#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int ht, hse, htt, hset, salsema;
	
	cout<<"Ingrese las hs trabajadas"<<endl;
	cin>>ht;
	cout<<"Ingrese las hs extra"<<endl;
	cin>>hse;
	//trabj 40hs o menos paga $16h
	//trabj más de 40hs por cada hs extra $20
	//1hs=$16
	//hse=$20
	htt=ht*16;
	hset=hse*20;
	salsema=(htt+hset);
	cout<<"El salario semanal es de: "<<"$"<<salsema<<endl;
	
	return 0;
}




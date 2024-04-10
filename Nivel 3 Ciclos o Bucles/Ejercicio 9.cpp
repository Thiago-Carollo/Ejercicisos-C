#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int n,suma=0,factorial=1;
    
    cout<<"Digite el total de elementos a sumar"<<endl; 
    cin>>n;
    
    for(int i=1;i<=n;i++)
	{
        factorial *= i; //primero sacamos los factoriales
        suma +=factorial; //luego los sumamos
    }
    
    cout<<"\n"<<"La suma de factoriales es: "<<suma<<endl;
    
    
    return 0;
}

#include <iostream>
#include <math.h>

using namespace std;

//float cubo(float numero)
//{
//    float valorCubo;
//    valorCubo = numero * numero * numero;
//    return valorCubo;
//}

//float cubo(float numero)
//{
//    return pow(numero,3);
//}

void cubo(float numero)
{
    float valorCubo;
    valorCubo = numero * numero * numero;
    cout<<"el cubo de "<<numero<<" es "<<valorCubo<<endl;
    return ;
}

int main()
{
    float valor,micubo;
    cout<<"Ingrese valor"<<endl;
    cin>>valor;
    cubo(valor);
//    micubo = cubo(valor);
//    cout<<"el cubo de "<<valor<<" es "<<micubo<<endl;
    return 0;
}

cout<<"el cubo de "<<valor<<" es "<<cubo(valor)<<endl;

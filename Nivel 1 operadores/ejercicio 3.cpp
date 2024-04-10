#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num1,num2,hipo;
    cout<<"Ingrese la longitud de los catetos: "<<endl;
    cin>>num1;
    cin>>num2;
    hipo= sqrt(pow(num1,2)+pow(num2,2));
    cout<<"La Hipotenusa es: "<< hipo<<endl;
    return 0;

}


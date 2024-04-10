#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int nota1,nota2,nota3,examf,trabf;
    cout<<"Ingrese la nota del de las calificaciones parciales "<<endl;
    cin>>nota1;
    cin>>nota2;
    cin>>nota3;
    cout<<"Ingrese la nota del examen final"<<endl;
    cin>>examf;
    cout<<"Ingrese la nota del trabajo final"<<endl;
    cin>>trabf;
    //calp=(nota1+nota2+nota3)/3;
    //calp=calp*0.55;
    //examf=examf*0.30;
    //trabf=trabf*0.15;
    cout<<"La nota Final es: "<<(((nota1+nota2+nota3)/3)*0.55+examf*0.30+trabf*0.15)<<endl;
    return 0;
}

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float per1,per2,per3, po1,po2,po3;
    
   	cout<<"Ingrese la cantidad de plata de las 3 personas"<<endl;
   	cin>>per1;
	cin>>per2;
	cin>>per3;
	po1=(((float)per1)/((float)100));
	po2=(((float)per2)/((float)100));   	
   	po3=(((float)per3)/((float)100));
   	cout<<"El porcentaje de la 1 persona es: "<<po1<<endl;
   	cout<<"El porcentaje de la 2 persona es: "<<po2<<endl;
    cout<<"El porcentaje de la 3 persona es: "<<po3<<endl;
	return 0;
}

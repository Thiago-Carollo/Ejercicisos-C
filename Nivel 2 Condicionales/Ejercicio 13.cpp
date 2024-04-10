#include <iostream>
#include <math.h>


using namespace std;

int main()
{
 float a = 0;
 float b = 0;
 float c = 0;
 int n = 2;
 float k1 = 0;
 float k2 = 0;
 cout << "ingrese el valor de a " << endl;
 cin >> (a);
 cout << "ingrese el valor de b " << endl;
 cin >> (b);
 cout << "ingrese el valor de c " << endl;
 cin >> (c);
 k1 = (-b + (sqrt(pow(b, n) - (4 * a * c)))) / (2 * a);
 k2 = (-b - (sqrt(pow(b, n) - (4 * a * c)))) / (2 * a);
 cout << "x1 es igual a: " << k1 << endl;
 cout << "x2 es igual a: " << k2 << endl;
 return 0;
}


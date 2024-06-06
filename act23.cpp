#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int n,exponente,resultado;
    cout<<"Digite el numero  ";
    cin>>n;
    cout<<"Diigita el numero expomnente: ";
    cin>>exponente;
    resultado=pow(n, exponente);
    cout<<"El resultado es: "<<resultado;
}

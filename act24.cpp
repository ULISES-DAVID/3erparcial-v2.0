#include <iostream>
using namespace std;
int main ()
{
    int n,exponente,resultado;
    cout<<"Digite el numero ";
    cin>>n;
    cout<<"Diigite el numero espomnente: ";
    cin>>exponente;
    resultado=n;
    for (int i; i!= exponente; i++)
    {
        resultado=resultado*n;
    }
    cout<<"El resultado es "<<resultado;
    return 0;
}

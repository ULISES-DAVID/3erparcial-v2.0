#include <iostream>
using namespace std;

int main()
{
    int numero[5], num;
    
    for(int i = 0;  i < 5; i++)
    {
    cout<<"digita un numero para la posicion";
    cin>>num;
    numero[i]=num;
    }
    for (int i = 0;  i < 5; i++)
   {
      
      cout<<"la posicion es " <<i<< "del " <<numero[i];

   }

}

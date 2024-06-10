#include <iostream>
using namespace std;
//fue hecho por Leonardo 
int main(){
  double num,decimal;
  cout<<"ingresa un numero natural";
  cin>>num;
  cout<<"ingresa dos numeros decimales";
  cin>>decimal;
  //hecho por Daniel
  double raizCuadrada = 1.0;
  for (int i = 0; i < 10; ++i) {
      raizCuadrada = 0.5 * (raizCuadrada + num / raizCuadrada);
  }
  cout << "La raiz cuadrada de " << num << " es: " << raizCuadrada;

  //hecho por david
  unsigned long long factorial = 1;
  for (int i = 2; i<= static_cast<int>(num); ++i){
     factorial*=i;
  }
cout<<"el factorial de"<<static_cast<int>(num)<<"es:"<<factorial<<endl;

    //hecho por Fernanda
    bool esPrimo = true;
  for(int i= 2; i <= static_cast<int>(num)/2;++i){
    if (static_cast<int>(num)%i==0){
      esPrimo=false;
      break;
    }
  }
  cout<<"el numero"<<static_cast<int>(num)<<(esPrimo?"es primo.":"no es primo.")<<endl;
  


//hecho por di carlo
double potencia= 1.0;
for (int i = 0 ; i<static_cast<int>(decimal);++ i)
  {
    potencia*=num;
  }
cout << static_cast<int>(num)<< " elevado a la potencia "<< decimal<< " es " << potencia<< endl;
if (static_cast<int> (num) <100 ){
  cout << "el numero es menor que 100 ";
}
else if (static_cast<int>(num)>50){
  cout << "el numero es mayor que 50";
}
else
{
  cout << "el numero no es ni mayor que 50 ni menor que 100";
}
  
return 0;
  }

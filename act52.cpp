#include <iostream>
using namespace std;
int funcion1(int a, int b, int c){
  int calificacion;
    calificacion = (a*20/100)+(b*20/100)+(c*60/100);
    return calificacion;
}
int funcion2(int a, int b,int c){
int p;
  if(a>=b && a>=c){
 p=a;
  }
  if(b>=a && b>=c){
    p=b;
  }
   if(c>=a && c>=a){
   p=c;
    }
  return p;
}
int main(){
  char respuesta;
  do{
    int cal[3];
    cout<<"Cual fue la calificacion de examen del primer parcial?";
    cin>>cal[0];
    cout<<"Cual fue la calificacion de examen del segundo parcial?";
    cin>>cal[1];
    cout<<"cual fue la calificacion de examen del tercer parcial?";
    cin>>cal[2];
  cout<< funcion1(cal[0], cal[1], cal[2]) << "\n";

  cout<< "la calificacion mas alta fue "<< funcion2(cal[0], cal[1], cal[2]) << "\n";

    
     cout << "¿Desea calcular otra calificación? (S/N): ";
        cin >> respuesta;

    } while (respuesta == 'S' || respuesta == 's');

    cout << "Fin del programa." << endl;

  
  return 0;

}

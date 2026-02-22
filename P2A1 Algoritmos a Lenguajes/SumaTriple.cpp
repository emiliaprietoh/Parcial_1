//Emilia Cristina Prieto Henriquez
//ID 00580909
//Ing. de Animacion Digital

#include <iostream>
using namespace std;

int main () {
    float num1, num2, doble, triple;

   cout << "Ingrese un numero: " ;
   cin >> num1;
   cout << "Ingrese otro numero: " ;
   cin >> num2;

   doble = (num1 + num2) * 2;
   triple = (num1 - num2) * 3;

   cout << "El doble de la suma es " << doble << endl;
   cout << "El triple de la resta es: " << triple << endl;

   return 0;
}
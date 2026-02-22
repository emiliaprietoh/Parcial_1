//Emilia Cristina Prieto Henriquez
//ID 00580909
//Ing. de Animacion Digital

#include <iostream>
using namespace std;

int main () {
float num, cuad, cubo, raiz_cuad, raiz_cub;

cout << "Ingrese numero";
cin >> num;

cuad = num ^ 2;
cubo = num ^ 3;
raiz_cuad = num ^ 0.5;
raiz_cub = num ^ (1/3);

cout << "Cuadrado del numero" << cuad << endl;
cout << "Cubo del numero" << cubo << endl;
cout << "raiz cuadrada del numero" << raiz_cuad << endl;
cout << "raiz cubica del numero" << raiz_cub << endl;

return 0;
}
//Emilia Cristina Prieto Henriquez
//ID 00580909
//Ing. de Animacion Digital

#include <iostream>
using namespace std;

int main () {
    float num1, num2, raiz_cuad, raiz_cub;

    cout << "Digite numero 1: ";
    cin >> num1;
    cout << "Digite numero 2: ";
    cin >> num2;

    raiz_cuad = (num1 * num2 / 2) ^ (1/2);
    raiz_cub = ((num1 ^ 2 + num2 ^ 3) / 4 * 3) ^ (1/3);

    cout << "La raiz cuadrada es: " << raiz_cuad << endl;
    cout << "La raiz cubica es: " << raiz_cub << endl;

return 0
}
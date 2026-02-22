//Emilia Cristina Prieto Henriquez
//ID 00580909
//Ing. de Animacion Digital

#include <iostream>
using namespace std;

int TresNumeros () {
    float num1, num2, num3, sum, pdto;

    cout << "Ingrese numero 1: ";
    cin >> num1;
    cout << "Ingrese numero 2: ";
    cin >> num2;
    cout << "Ingrese numero 3: ";
    cin >> num3;

    sum = num1 + num2 + num3;
    pdto = num1 * num2 * num3;

    cout << "Suma de los 3 numeros: " << sum << endl;
    cout <<Producto de los 3 numeros: << pdto << endl;

    return 0;

}
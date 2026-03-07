//Emilia Cristina Prieto Henriquez
//ID 00580909
//Ing. de Animacion Digital

#include <iostream>
using namespace std;

int main()
{
int cuaderno;

cout << "Numero de hojas del cuaderno?";
cin >> cuaderno;

if (cuaderno == 250) {
    cout << "El cuaderno cuesta $16.000";
}
else if (cuaderno == 100) {
    cout << "El cuaderno cuesta $11.000";
}
else if (cuaderno == 80) {
    cout << "El cuaderno cuesta $8.000";
}
else if (cuaderno == 50) {
    cout << "El cuaderno cuesta $4.500";
}
else {
    cout << "Numero de hojas incorrecto.";
}

    return 0;
}
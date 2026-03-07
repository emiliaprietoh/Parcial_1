//Emilia Cristina Prieto Henriquez
//ID 00580909
//Ing. de Animacion Digital

#include <iostream>
using namespace std;

int main() {
    int indicativo, tarifa;
    float num_min, val;
    string ciudad;
    
    cout << "Digite el indicativo: ";
    cin >> indicativo;
    cout << "Digite # de minutos: ";
    cin >> num_min;
    
    switch (indicativo) {
        case 1:
            val = num_min * 50;
            ciudad = "Bogota";
            tarifa = 50;
            break;
        case 2:
            val = num_min * 70;
            ciudad = "Cali";
            tarifa = 70;
            break;
        case 4:
            val = num_min * 100;
            ciudad = "Medellin";
            tarifa = 100;
            break;
        case 5:
            val = num_min * 160;
            ciudad = "Barranquilla";
            tarifa = 160;
            break;
        case 6:
            val = num_min * 180;
            ciudad = "Pereira";
            tarifa = 180;
            break;
        case 7:
            val = num_min * 190;
            ciudad = "Cucuta";
            tarifa = 190;
            break;
        default:
            cout << "Indicativo no existe" << endl;
            val = 0;
            ciudad = "Ninguna";
            tarifa = 0;
            break;
    }
    
   cout << "Ciudad a la que marca: " << ciudad << endl;
   cout << "Tarifa: $" << tarifa << endl;
   cout << "Valor llamada: $" << val << endl;
   return 0;
}
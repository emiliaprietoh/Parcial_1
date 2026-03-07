//Emilia Cristina Prieto Henriquez
//ID 00580909
//Ing. de Animacion Digital

#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int plazo;
    string art;
    
    cout << "Digite el plazo otorgado:";
    cin >> plazo;
    
    switch (plazo) {
        case 48:
         art = "un computador";
        break;
        case 36:
        art = "un TV de 42 pulgadas";
        break;
        case 24:
        art = "un Blackberry";
        break;
        case 12:
        art = "una camara digital";
        case 6:
        art = "un TV de 42 pulgadas";
        break;
        default:
        art = "";
        break;
        
    }
    
    if (art == "") {
        cout << "Error. Plazo no existe" << endl;
     } else {
        cout << "Podria llevar " << art << endl;
    }    
    return 0;
}
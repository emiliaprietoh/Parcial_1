//Emilia Cristina Prieto Henriquez
//ID 00580909
//Ing. de Animacion Digital

#include <iostream>
using namespace std;

int main() {
    int Num1, Num2, Suma;

    cout << "Ingrese el primer numero: ";
    cin >> Num1;

    if (Num1 % 2 == 0) 
    {
        
        if (Num1 > 0) 
        {
            cout << "Ingrese el segundo numero: ";
            cin >> Num2;

            if (Num2 % 2 == 0) 
            {
                
                if (Num2 > 0) 
                {
                    Suma = Num1 + Num2;
                    cout << "La suma es: " << Suma << endl;
                } else {
                    cout << "El segundo numero no es positivo." << endl;
                }
                
            } else 
            {
                cout << "El segundo numero no es par." << endl;
            }

        } else 
        {
            cout << "El primer numero no es positivo." << endl;
        }

    } else 
    {
        cout << "El primer numero no es par." << endl;
    }

    return 0;
}
//Emilia Cristina Prieto Henriquez
//ID 00580909
//Ing. de Animacion Digital

#include <iostream>
using namespace std;

int main() {
    
int num1, num2, num3, num4, may;

cout << "Digite numero 1:";
cin >> num1;
cout << "Digite numero 2:";
cin >> num2;    
cout << "Digite numero 3:";
cin >> num3;    
cout << "Digite numero 4:";
cin >> num4; 

if (num1>num2 && num1>num3 && num1>num4) {
 may = num1;   
}  
else if (num2>num1 && num2>num3 && num2>num4) {
 may = num2;   
}  
else if (num3>num1 && num3>num2 && num3>num4) {
 may = num3;   
} 
else if (num4>num1 && num4>num2 && num4>num3) {
 may = num4;   
} 
cout << "El numero mayor es el: " << may;
 return 0;   
}
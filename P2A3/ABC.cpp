//Emilia Cristina Prieto Henriquez
//ID 00580909
//Ing. de Animacion Digital

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

    string ideEmp, apeEmp, nomEmp;
    double salBas, porBon, valBon, bonTot, porEmp1, porEmp2, porEmp3, porEmp4, porEmp5, porEmp6, porEmp7;
    int tieSer, conEmp1, conEmp2, conEmp3, conEmp4, conEmp5, conEmp6, conEmp7, empTot;
    char opc;

    // variables
    bonTot = 0;
    conEmp1 = 0;
    conEmp2 = 0;
    conEmp3 = 0;
    conEmp4 = 0;
    conEmp5 = 0;
    conEmp6 = 0;
    conEmp7 = 0;

    //repetir
    do {
        system("cls"); 
        cout << "Identificacion del empleado: ";
        cin >> ideEmp;
        cout << "Apellidos del empleado : ";
        cin >> apeEmp;
        cout << "Nombres del empleado : ";
        cin >> nomEmp;
        cout << "Salario basico : ";
        cin >> salBas;
        cout << "Años de servicio : ";
        cin >> tieSer;

        // 5. Validación del tiempo de servicio 
        if (tieSer < 5) {
            porBon = 5;
            conEmp1 = conEmp1 + 1;
        } else {
            if (tieSer < 10) {
                porBon = 10;
                conEmp2 = conEmp2 + 1;
            } else {
                if (tieSer < 15) {
                    porBon = 15;
                    conEmp3 = conEmp3 + 1;
                } else {
                    if (tieSer < 20) {
                        porBon = 20;
                        conEmp4 = conEmp4 + 1;
                    } else {
                        if (tieSer < 25) {
                            porBon = 25;
                            conEmp5 = conEmp5 + 1;
                        } else {
                            if (tieSer < 30) {
                                porBon = 35;
                                conEmp6 = conEmp6 + 1;
                            } else {
                                porBon = 50;
                                conEmp7 = conEmp7 + 1;
                            }
                        }
                    }
                }
            }
        }

        valBon = (salBas * porBon) / 100;
        bonTot = bonTot + valBon;

        // 7. Datos de salida parciales
        cout << "Identificacion del empleado: " << ideEmp << endl;
        cout << "Nombres del empleado :" << nomEmp << endl;
        cout << "Apellidos del empleado : " << apeEmp << endl;
        cout << "Porcentaje de bonificacion : " << porBon << endl;
        cout << "Valor bonificacion : " << valBon << endl;

        // 8. Pregunta al usuario
        cout << "¿Desea ingresar nuevos datos [S/N]? ";
        cin >> opc;

    } while (toupper(opc) != 'N');

    // 9. Procesos totales
    empTot = conEmp1 + conEmp2 + conEmp3 + conEmp4 + conEmp5 + conEmp6 + conEmp7;
    
    if (empTot > 0) {
        porEmp1 = (double)(conEmp1 * 100) / empTot;
        porEmp2 = (double)(conEmp2 * 100) / empTot;
        porEmp3 = (double)(conEmp3 * 100) / empTot;
        porEmp4 = (double)(conEmp4 * 100) / empTot;
        porEmp5 = (double)(conEmp5 * 100) / empTot;
        porEmp6 = (double)(conEmp6 * 100) / empTot;
        porEmp7 = (double)(conEmp7 * 100) / empTot;
    }

    // 10. Datos de salida totales
    system("cls");
    cout << "Empleados con menos de 5 años : " << conEmp1 << " " << round(porEmp1 * 100) / 100 << "%" << endl;
    cout << "Empleados con 5 años o mas y menos de 10 : " << conEmp2 << " " << round(porEmp2 * 100) / 100 << "%" << endl;
    cout << "Empleados con 10 años o más y menos de 15: " << conEmp3 << " " << round(porEmp3 * 100) / 100 << "%" << endl;
    cout << "Empleados con 15 años o mas y menos de 20: " << conEmp4 << " " << round(porEmp4 * 100) / 100 << "%" << endl;
    cout << "Empleados con 20 años o mas y menos de 25: " << conEmp5 << " " << round(porEmp5 * 100) / 100 << "%" << endl;
    cout << "Empleados con 25 años o más y menos de 30: " << conEmp6 << " " << round(porEmp6 * 100) / 100 << "%" << endl;
    cout << "Empleados con 30 años o más : " << conEmp7 << " " << round(porEmp7 * 100) / 100 << "%" << endl;
    cout << "Total empleados : " << empTot << endl;
    cout << "Bonificaciones total pagadas : " << bonTot << endl;

    return 0;
}

    return 0;
}









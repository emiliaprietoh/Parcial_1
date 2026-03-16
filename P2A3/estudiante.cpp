//Emilia Cristina Prieto Henriquez
//ID 00580909
//Ing. de Animacion Digital

#include <iostream>
#include <string>
#include <cmath> //  para usar round
using namespace std;

int main() {
    
    string idEst, nomEst, apEst, ideEstMay, nomEstMay, apeEstMay, codMat;
    char opc, seg;
    double not1, not2, not3, notDef, sumNotDef, proEst, sumNotPro, proGru, proEstMay;
    int conMat, conEst;

    //iniciar variables
    conEst = 0;
    sumNotPro = 0;
    ideEstMay = "";
    nomEstMay = "";
    apeEstMay = "";
    proEstMay = 0;
    seg = 'S';

    //ciclo
    while (toupper(seg) != 'N') {

        //datos estudiante
        system("cls"); 
        cout << "Identificacion del estudiante : ";
        cin >> idEst;
        cout << "Apellidos del estudiante : ";
        cin >> apEst;
        cout << "Nombres del estudiante : ";
        cin >> nomEst;

        //contador de materias y sumatoria de notas a 0
        conMat = 0; 
        sumNotDef = 0;

        //ciclo ingreso materia notas de un estudiante
        opc = 'S'; 
        while (toupper(opc) != 'N') {
            cout << "Codigo de la materia : ";
            cin >> codMat; 
            cout << "Nota 1 30% : ";
            cin >> not1;
            cout << "Nota 2 30% : ";
            cin >> not2;
            cout << "Nota 3 40% : ";
            cin >> not3;

            //calcular Nota
            notDef = (not1 * 0.30) + (not2 * 0.30) + (not3 * 0.40);
            conMat++; 
            sumNotDef = sumNotDef + notDef;

            //visualizar nota definitiva
            cout << "Nota definitiva: " << round(notDef * 100) / 100 << endl;
            cout << "Ingresa una nueva materia [S/N]? "; 
            cin >> opc;
        }

        //promedio del estudiante
        proEst = sumNotDef / conMat;
        sumNotPro += proEst;
        conEst++;

        //determinar estudiante con mejor promedio
        if (proEst > proEstMay) {
            ideEstMay = idEst; 
            apeEstMay = apEst; 
            nomEstMay = nomEst;
            proEstMay = proEst;
        }

        cout << "\nPromedio del estudiante: " << round(proEst * 100) / 100 << endl;
        cout << "\n¿Desea ingresar un nuevo estudiante [S/N]? ";
        cin >> seg;
    } 
    
    //final
    if (conEst > 0) {
        proGru = sumNotPro / conEst;
        cout << "\nNumero de estudiantes: " << conEst << endl;
        cout << "Promedio del grupo : " << round(proGru * 100) / 100 << endl;
        cout << "\nEstudiante con mejor promedio:" << endl;
        cout << ideEstMay << " " << apeEstMay << " " << nomEstMay 
             << " | Promedio: " << round(proEstMay * 100) / 100 << endl;
    }

    return 0;
}









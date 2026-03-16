#Emilia Cristina Prieto Henriquez
#ID 00580909
#Ing. de Animación Digital

import os

bonTot = 0.0
conEmp1 = conEmp2 = conEmp3 = conEmp4 = conEmp5 = conEmp6 = conEmp7 = 0
opc = "S"

while opc.upper() != "N":
    os.system('cls' if os.name == 'nt' else 'clear')
    ideEmp = input("Identificacion del empleado: ")
    apeEmp = input("Apellidos del empleado : ")
    nomEmp = input("Nombres del empleado : ")
    salBas = float(input("Salario básico : "))
    tieSer = int(input("Años de servicio : "))
    
    if tieSer < 5:
        porBon = 5
        conEmp1 += 1
    elif tieSer < 10:
        porBon = 10
        conEmp2 += 1
    elif tieSer < 15:
        porBon = 15
        conEmp3 += 1
    elif tieSer < 20:
        porBon = 20
        conEmp4 += 1
    elif tieSer < 25:
        porBon = 25
        conEmp5 += 1
    elif tieSer < 30:
        porBon = 35
        conEmp6 += 1
    else:
        porBon = 50
        conEmp7 += 1
        
    valBon = (salBas * porBon) / 100
    bonTot += valBon
    
    print(f"Identificación del empleado: {ideEmp}")
    print(f"Nombres del empleado : {nomEmp}")
    print(f"Apellidos del empleado : {apeEmp}")
    print(f"Porcentaje de bonificación : {porBon}%")
    print(f"Valor bonificación : {valBon}")
    
    opc = input("¿Desea ingresar nuevos datos [S/N]? ")

empTot = conEmp1 + conEmp2 + conEmp3 + conEmp4 + conEmp5 + conEmp6 + conEmp7

if empTot > 0:
    porEmp1 = (conEmp1 * 100) / empTot
    porEmp2 = (conEmp2 * 100) / empTot
    porEmp3 = (conEmp3 * 100) / empTot
    porEmp4 = (conEmp4 * 100) / empTot
    porEmp5 = (conEmp5 * 100) / empTot
    porEmp6 = (conEmp6 * 100) / empTot
    porEmp7 = (conEmp7 * 100) / empTot
else:
    porEmp1 = porEmp2 = porEmp3 = porEmp4 = porEmp5 = porEmp6 = porEmp7 = 0

os.system('cls' if os.name == 'nt' else 'clear')
print(f"Empleados con menos de 5 años : {conEmp1} {round(porEmp1, 2)}%")
print(f"Empleados con 5 años o mas y menos de 10 : {conEmp2} {round(porEmp2, 2)}%")
print(f"Empleados con 10 años o más y menos de 15: {conEmp3} {round(porEmp3, 2)}%")
print(f"Empleados con 15 años o mas y menos de 20: {conEmp4} {round(porEmp4, 2)}%")
print(f"Empleados con 20 años o mas y menos de 25: {conEmp5} {round(porEmp5, 2)}%")
print(f"Empleados con 25 años o más y menos de 30: {conEmp6} {round(porEmp6, 2)}%")
print(f"Empleados con 30 años o más : {conEmp7} {round(porEmp7, 2)}%")
print(f"Total empleados : {empTot}")
print(f"Bonificaciones total pagadas : {bonTot}")
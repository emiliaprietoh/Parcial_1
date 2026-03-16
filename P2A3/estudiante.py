#Emilia Cristina Prieto Henriquez
#ID 00580909
#Ing. de Animación Digital

import os

# Inicializar variables
conEst = 0
sumNotPro = 0
ideEstMay = ""
nomEstMay = ""
apeEstMay = ""
proEstMay = 0
seg = "S"

# Ciclo para ingresar nuevo estudiante
while seg.upper() != "N":
    
    # Capturar los datos del estudiante
    os.system('cls' if os.name == 'nt' else 'clear')
    ideEst = input("Identificacion del estudiante : ")
    apeEst = input("Apellidos del estudiante : ")
    nomEst = input("Nombres del estudiante : ")
    
    # Inicializar contador de materias y sumatoria
    conMat = 0
    sumNotDef = 0
    
    # Ciclo para ingresar las materias y notas
    opc = "S"
    while opc.upper() != "N":
        
        # Capturar materias y notas
        codMat = input("Código de la materia : ")
        not1 = float(input("Nota 1 30% : "))
        not2 = float(input("Nota 2 30% : "))
        not3 = float(input("Nota 3 40% : "))
        
        # Calcular nota definitiva
        notDef = (not1 * 0.30) + (not2 * 0.30) + (not3 * 0.40)
        conMat += 1
        sumNotDef += notDef
        
        # Visualizar nota definitiva
        print(f"Nota definitiva: {round(notDef, 2)}")
        opc = input("¿Ingresa una nueva materia [S/N]? ")
        
    # Calcular promedio del estudiante
    proEst = sumNotDef / conMat
    sumNotPro += proEst
    conEst += 1
    
    # Determinar el estudiante con mejor promedio
    if proEst > proEstMay:
        ideEstMay = ideEst
        apeEstMay = apeEst
        nomEstMay = nomEst
        proEstMay = proEst
        
    # Visualizar promedio del estudiante
    print(f"\nPromedio del estudiante: {round(proEst, 2)}\n")
    seg = input("¿Desea ingresar un nuevo estudiante [S/N]? ")

# Procesos finales y salida
if conEst > 0:
    proGru = sumNotPro / conEst
    
    print("\n" + "="*30)
    print(f"Numero de estudiantes: {conEst}")
    print(f"Promedio del grupo : {round(proGru, 2)}")
    print("\nEstudiante con mejor promedio:")
    print(f"{ideEstMay} {apeEstMay} {nomEstMay} | Promedio: {round(proEstMay, 2)}")
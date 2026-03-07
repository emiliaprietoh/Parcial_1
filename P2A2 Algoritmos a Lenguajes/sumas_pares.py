#Emilia Cristina Prieto Henriquez
#ID 00580909
#Ing. de Animacion Digital

num1= int(input("Ingrese el primer numero: "))

if num1 % 2 == 0:
    if num1 > 0:
        num2 = int(input("Ingrese el segundo número: "))
        
        if num2 % 2 == 0:
            if num2 > 0:
                suma = num1 + num2
                print("La suma es:", suma)
            else:
                print("El segundo número no es positivo.")
        else:
            print("El segundo número no es par.")
    else:
        print("El primer número no es positivo.")
else:
    print("El primer número no es par.")

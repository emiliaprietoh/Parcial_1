#Emilia Cristina Prieto Henriquez
#ID 00580909
#Ing. de Animacion Digital

num1= int(input("Digite numero 1: "))
num2= int(input("Digite numero 2: "))
num3= int(input("Digite numero 3: "))
num4= int(input("Digite numero 4: "))

if (num1>num2 and num1>num3 and num1>num4):
    may = num1
elif (num2>num1 and num2>num3 and num2>num4):
    may = num2
elif (num3>num2 and num3>num1 and num3>num4):
    may = num3
elif (num4>num2 and num4>num3 and num4>num1):
    may = num4
    
print ("El numero mayor es el:", may) 


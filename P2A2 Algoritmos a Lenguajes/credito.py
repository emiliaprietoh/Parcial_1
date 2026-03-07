#Emilia Cristina Prieto Henriquez
#ID 00580909
#Ing. de Animacion Digital

plazo = int(input("Digite el plazo otorgado: "))

match plazo:
    case 48:
        art = "un computador"
    case 36:
        art = "un TV de 42 pulgadas"
    case 24:
        art = "un Blackberry"
    case 12:
        art = "una camara digital"
    case 6:
        art = "una impresora"
    case _:
        art = ""
        
if (art == ""):
    print("Error. Plazo no existe") 
else:
    print("Podria llevar ", art)

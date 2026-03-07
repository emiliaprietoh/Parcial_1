#Emilia Cristina Prieto Henriquez
#ID 00580909
#Ing. de Animacion Digital

num = float(input("Digite numero obtenido: "))
val_compra = float(input("Digite valor de compra: $"))

match num:
    case 0 | 1:
        total_pag = val_compra * 0.95
    case 2 | 3:
        total_pag = val_compra * 0.87
    case 4 | 5:
        total_pag = val_compra * 0.78
    case 6 | 7:
        total_pag = val_compra * 0.7
    case 8 | 9:
        total_pag = val_compra * 0.5
    case _:
        print("Error. Numero no existe.")
        total_pag = val_compra
        
print ("Valor total a pagar: $", total_pag)
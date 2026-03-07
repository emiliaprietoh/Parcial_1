#Emilia Cristina Prieto Henriquez
#ID 00580909
#Ing. de Animacion Digital

indicativo = int(input("Digite el indicativo:"))
num_min = int(input("Digite # de minutos:"))

match (indicativo):
    case 1:
        val = num_min * 50
        ciudad = "Bogota"
        tarifa = 50
    case 2:
        val = num_min * 70
        ciudad = "Cali"
        tarifa = 70
    case 4:
        val = num_min * 100
        ciudad = "Medellin"
        tarifa = 100
    case 5:
        val = num_min * 160
        ciudad = "Baranquilla"
        tarifa = 160
    case 6:
        val = num_min * 180
        ciudad = "Pereira"
        tarifa = 180
    case 7:
        val = num_min * 190
        ciudad = "Cucuta"
        tarifa = 190
    case _:
        print("Indicativo no existe")
        val = 0
        ciudad = "Ninguna"
        tarifa = 0
    
print ("Ciudad a la que marca: ",ciudad)
print ("Tarifa: $",tarifa)
print ("valor llamada: $",val)
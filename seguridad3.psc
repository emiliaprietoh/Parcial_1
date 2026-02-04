//Emilia Cristina Prieto Henriquez
//Ing. De Animacion Digital
//ID 0580909

Algoritmo seguridad3
	
	Definir secreto, code como Entero;
	Secreto <- 123456;
	
	Escribir "Ingrese el codigo";
	Leer code;
	
	Mientras code<>secreto Hacer;
		Escribir "Codigo Incorrecto. Vuelve a Intentar:"
		Leer code
	FinMientras
	Escribir "Acceso permitido"
FinAlgoritmo

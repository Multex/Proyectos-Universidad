Algoritmo Problema_01
	
	Definir inversion, avenida1, avenida2, avenida3, avenida4, avenida5 Como Real
	
	Escribir "Ingrese la cantidad de inversion: S/."
	Leer inversion
	
	// Calculos
	avenida1 = inversion * 0.3
	avenida2 = inversion * 0.2
	avenida3 = inversion * 0.25
	avenida4 = inversion * 0.1
	avenida5 = inversion - (avenida1+avenida2+avenida3+avenida4)
	
	Escribir "La cantidad de inversion para la avenida 28 de Julio es: " avenida1
	Escribir "La cantidad de inversion para la avenida Grau es: " avenida2
	Escribir "La cantidad de inversion para la avenida San Martin es: " avenida3
	Escribir "La cantidad de inversion para la avenida Mercedes Indacochea es: " avenida4
	Escribir "La cantidad de inversion para la avenida 9 de Octubre es: " avenida5
	
FinAlgoritmo

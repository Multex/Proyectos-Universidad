Algoritmo interes
	Definir monto, capital, tasa Como Real
	Definir periodo Como Entero
	
	// No pude hacerlo funcionar
	Definir date,inputDate Como Caracter
	Imprimir "Ingrese el periodo de tiempo (a�os, meses, dias): "
	Leer date
	Mientras date <> "a�os" o date <> "meses" o date <> "dias" Hacer
		Imprimir "Periodo ingresado erroneo, por favor ingrese un periodo de tiempo v�lido (a�os, meses, dias): "
		Leer date
	Fin Mientras
	
	
FinAlgoritmo

Algoritmo area_terreno
	Definir area, ladoA, base, ladoC Como Real
	Escribir "Ingresa la medida de los laterales: "
	Leer ladoA ladoC
	Escribir "Ingresa la medida de la base: "
	Leer base
	// Calculo
	// No recordaba bien la formula asi que lo hice de esta forma
	solu1 = (ladoA+ladoC)/2
	area = solu1*base
	Imprimir "El àrea del terreno es: ", area
FinAlgoritmo

Algoritmo Interés_Compuesto
	// Cálculo de interés compuesto
	Definir Resultado_Monto, Capital, Tasa, Periodos, Interes como real
	Escribir "Ingrese Capital: "
	Leer Capital
	Escribir "Ingresar Tasa: "
	Leer Tasa
	Escribir "Ingrese Número de Periodos: "
	Leer Periodos 
	// Cálculamos el Valor del Monto
	Resultado_Monto <-  Capital * ( 1 + Tasa / 100 ) ^ Periodos
	Interes <- Resultado_Monto - Capital
	
	Escribir " Resultado del Monto: ", Resultado_Monto
	Escribir " Resultado del Interés: ", Interes
FinAlgoritmo

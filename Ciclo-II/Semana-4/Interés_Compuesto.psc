Algoritmo Inter�s_Compuesto
	// C�lculo de inter�s compuesto
	Definir Resultado_Monto, Capital, Tasa, Periodos, Interes como real
	Escribir "Ingrese Capital: "
	Leer Capital
	Escribir "Ingresar Tasa: "
	Leer Tasa
	Escribir "Ingrese N�mero de Periodos: "
	Leer Periodos 
	// C�lculamos el Valor del Monto
	Resultado_Monto <-  Capital * ( 1 + Tasa / 100 ) ^ Periodos
	Interes <- Resultado_Monto - Capital
	
	Escribir " Resultado del Monto: ", Resultado_Monto
	Escribir " Resultado del Inter�s: ", Interes
FinAlgoritmo

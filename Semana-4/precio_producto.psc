Algoritmo precio_producto
	Definir precio, cantidad, descuento, precioTotal Como Real
	igv = 0.18
	
	Imprimir "Ingrese el precio del producto: S/."
	Leer precio
	Imprimir "Ingrese la cantidad: "
	Leer cantidad
	Imprimir "Ingrese el % de descuento, (en caso no haya dejar en blanco): "
	Leer descuento
	
	// Calculo
	
	precio_por_producto = precio * cantidad
	precioIgv = precio_por_producto * igv
	
	Si descuento = undefined Entonces
		precioTotal = precio_por_producto + precioIgv
		
		Imprimir "El precio a pagar es de: S/. ", precioTotal
	SiNo
		precio_descuento = precio_por_producto * descuento/100
		
		precioTotal = (precio_por_producto - precio_descuento) + precioIgv
		
		Imprimir "El precio a pagar es de: S/. ", precioTotal
	Fin Si
	
FinAlgoritmo

package evaluación;

import java.util.Scanner;

public class Pregunta01 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.print("Ingrese la cantidad de productos: ");
        int cantidadProductos = scan.nextInt();

        Producto[] productos = new Producto[cantidadProductos];

        for (int i = 0; i < cantidadProductos; i++) {
            System.out.print("Ingrese el nombre del producto " + (i + 1) + ": ");
            String nombre = scan.next();
            System.out.print("Ingrese la cantidad del producto " + (i + 1) + ": ");
            int cantidad = scan.nextInt();
            System.out.print("Ingrese el precio del producto " + (i + 1) + ": ");
            double precio = scan.nextDouble();
            productos[i] = new Producto(nombre, cantidad, precio);
        }

        double[] subtotales = calcularSubtotales(productos);
        double totalBoleta = calcularTotalBoleta(subtotales);
        double descuento = calcularDescuento(totalBoleta);
        totalBoleta -= descuento;

        System.out.println("El total de la boleta es: " + totalBoleta);
        System.out.println("El descuento es: " + descuento);

        int[] indices = obtenerIndicesExtremos(subtotales, productos);

        System.out.println("El producto más barato es: " + productos[indices[0]].nombre +
                " con un precio de: " + productos[indices[0]].precio);
        System.out.println("El producto más caro es: " + productos[indices[1]].nombre +
                " con un precio de: " + productos[indices[1]].precio);

        scan.close();
    }

    public static double[] calcularSubtotales(Producto[] productos) {
        double[] subtotales = new double[productos.length];

        for (int i = 0; i < productos.length; i++) {
            subtotales[i] = productos[i].cantidad * productos[i].precio;
        }

        return subtotales;
    }

    public static double calcularTotalBoleta(double[] subtotales) {
        double totalBoleta = 0;

        for (double subtotal : subtotales) {
            totalBoleta += subtotal;
        }

        return totalBoleta;
    }

    public static double calcularDescuento(double totalBoleta) {
        if (totalBoleta > 435) {
            return totalBoleta * 0.07;
        }

        return 0;
    }

    public static int[] obtenerIndicesExtremos(double[] subtotales, Producto[] productos) {
        int indiceProductoMasBarato = 0;
        int indiceProductoMasCaro = 0;

        for (int i = 1; i < subtotales.length; i++) {
            if (subtotales[i] < subtotales[indiceProductoMasBarato]) {
                indiceProductoMasBarato = i;
            }
            if (subtotales[i] > subtotales[indiceProductoMasCaro]) {
                indiceProductoMasCaro = i;
            }
        }

        return new int[] { indiceProductoMasBarato, indiceProductoMasCaro };
    }

    private static class Producto {
        public String nombre;
        public int cantidad;
        public double precio;

        public Producto(String nombre, int cantidad, double precio) {
            this.nombre = nombre;
            this.cantidad = cantidad;
            this.precio = precio;
        }
    }
}
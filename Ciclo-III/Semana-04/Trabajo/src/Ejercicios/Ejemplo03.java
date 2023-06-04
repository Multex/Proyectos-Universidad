package Ejercicios;

import java.util.Scanner;

public class Ejemplo03 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        String respuesta;
        int tipoSandwich;
        double precio = 0;
        double servicio = 0;
        double propina = 0;
        double total = 0;
        boolean continuar = true;

        while (continuar) {
            System.out.println("Ingrese el tipo de Sandwich");
            System.out.println("1. Moderado - S/4.5");
            System.out.println("2. Mediano - S/5.0");
            System.out.println("3. Extra Grande - S/7.5");
            System.out.println("4. Full - S/13.5");
            System.out.print("=> ");
            tipoSandwich = scan.nextInt();

            switch (tipoSandwich) {
                case 1:
                    precio += 4.50;
                    break;
                case 2:
                    precio += 5.00;
                    break;
                case 3:
                    precio += 7.50;
                    break;
                case 4:
                    precio =+ 13.50;
                    break;
                default:
                    System.out.println("Error: Tipo de Sandwich no existe");
                    break;
            }

            System.out.print("¿Desea continuar? (S/N): ");
            respuesta = scan.next();
            if (respuesta.toUpperCase().equals("N")) {
                continuar = false;
            }
        }

        if (precio != 0) {
            servicio = precio * 0.05;
            propina = precio * 0.02;
            total = precio + servicio + propina;
            System.out.println("El precio del Sandwich es: " + precio);
            System.out.println("El precio del Servicio es: " + Math.round(servicio * 100.0) / 100.0);
            System.out.println("El precio de la Propina es: " + propina);
            System.out.println("El precio Total es: " + Math.round(total * 100.0) / 100.0);
        }

        scan.close();
    }
}

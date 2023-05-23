package Poo2;

import java.util.Scanner;

public class Caso3 {
    public static void main(String[] args) {

        /*
        Desarrollar una solución que permita ingresar la suma y diferencia de dos
        números enteros y en base a estas cantidades calcular y mostrar los datos
         */

        // ve: suma, diferencia
        // vs: n1, n2

        // Variables
        int suma, diferencia, n1, n2;
        Scanner lector = new Scanner(System.in);

        // Lectura de datos
        System.out.print("Ingrese la suma: ");
        suma = lector.nextInt();

        System.out.print("Ingrese la diferencia: ");
        diferencia = lector.nextInt();

        // Calculos
        n1 = (suma + diferencia) / 2;
        n2 = suma - n1;

        // Salida
        System.out.println("El primer número es: " + n1);
        System.out.println("El segundo número es: " + n2);
    }
}

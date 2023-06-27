package evaluación;

import java.util.Scanner;

public class Pregunta02 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int cantidadResistencias;
        double voltaje, resistenciaTotal, potencia;

        System.out.print("Ingrese el voltaje: ");
        voltaje = scan.nextDouble();
        System.out.print("Ingrese la cantidad de resistencias: ");
        cantidadResistencias = scan.nextInt();

        resistenciaTotal = hallarTotalResistencia(scan, cantidadResistencias);
        potencia = obtenerCorriente(voltaje, resistenciaTotal);

        System.out.println("La potencia es: " + potencia);

        scan.close();
    }

    public static double hallarTotalResistencia(Scanner scan, int cantidadResistencias) {
        double resistenciaTotal = 0;

        for (int i = 1; i <= cantidadResistencias; i++) {
            System.out.print("Ingrese la resistencia " + i + ": ");
            resistenciaTotal += scan.nextDouble();
        }

        return resistenciaTotal;
    }

    public static double obtenerCorriente(double voltaje, double resistenciaTotal) {
        double corriente = voltaje / resistenciaTotal;
        return voltaje * corriente;
    }
}
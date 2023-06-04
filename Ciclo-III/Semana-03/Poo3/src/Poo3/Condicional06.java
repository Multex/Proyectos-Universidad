package Poo3;

import java.util.Scanner;

public class Condicional06 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int horasTrabajadas;
        double tarifaHoraria, sueldo, bonificacion;

        System.out.print("Ingrese el número de horas trabajadas: ");
        horasTrabajadas = scan.nextInt();
        
        System.out.print("Ingrese la tarifa horaria: ");
        tarifaHoraria = scan.nextDouble();

        sueldo = horasTrabajadas * tarifaHoraria;

        if (sueldo > 2400) {
            bonificacion = sueldo * 0.2;
        } else {
            bonificacion = sueldo * 0.1;
        }

        System.out.println("El sueldo es: " + sueldo);
        System.out.println("La bonificación es: " + bonificacion);
        System.out.println("El sueldo total es: " + (sueldo + bonificacion));

        scan.close();
    }
}

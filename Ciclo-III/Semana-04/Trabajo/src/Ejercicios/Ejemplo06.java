package Ejercicios;

import java.util.Scanner;

public class Ejemplo06 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int aprobados = 0, desaprobados = 0, malos = 0, regulares = 0, buenos = 0, excelentes = 0;
        double promedioSalon = 0;
        double nota;
        boolean continuar = true;

        while (continuar) {
            System.out.print("Ingrese la nota del alumno: ");
            nota = scan.nextDouble();

            if (nota >= 11) {
                aprobados++;
                if (nota >= 11 && nota <= 14) {
                    regulares++;
                } else if (nota >= 15 && nota <= 18) {
                    buenos++;
                } else if (nota >= 19 && nota <= 20) {
                    excelentes++;
                }
            } else {
                desaprobados++;
                if (nota < 11) {
                    malos++;
                }
            }

            promedioSalon += nota;

            System.out.print("¿Desea continuar? (S/N): ");
            continuar = scan.next().toUpperCase().charAt(0) == 'S';
        }

        promedioSalon /= (aprobados + desaprobados);

        System.out.println("El promedio del salón es: " + promedioSalon);
        System.out.println("El número de alumnos aprobados es: " + aprobados);
        System.out.println("El número de alumnos desaprobados es: " + desaprobados);
        System.out.println("El número de alumnos con nota MALA es: " + malos);
        System.out.println("El número de alumnos con nota REGULAR es: " + regulares);
        System.out.println("El número de alumnos con nota BUENA es: " + buenos);
        System.out.println("El número de alumnos con nota EXCELENTE es: " + excelentes);

        scan.close();
    }
}

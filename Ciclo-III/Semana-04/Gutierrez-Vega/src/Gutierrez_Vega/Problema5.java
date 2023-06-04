package Gutierrez_Vega;

import java.util.Scanner;

public class Problema5 {
    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);

        String dni, nombre, apellidoPaterno, apellidoMaterno, sexo, opcion;
        int n, nUniversitarios = 0, nProfesionales = 0, nGeneral = 0, nHombres = 0, nMujeres = 0;
        double ingresoGeneral = 0, ingresoUniversitarios = 0, ingresoProfesionales = 0, ingresoTotal = 0;
        boolean continuar = true;

        while(continuar) {
            System.out.print("DNI:");
            dni = scan.nextLine();
            System.out.print("Nombre:");
            nombre = scan.nextLine();
            System.out.print("Apellido Paterno:");
            apellidoPaterno = scan.nextLine();
            System.out.print("Apellido Materno:");
            apellidoMaterno = scan.nextLine();
            
            System.out.print("Sexo: (M/F)");
            sexo = scan.nextLine();
            while (!sexo.toUpperCase().equals("M") && !sexo.toUpperCase().equals("F")) {
                System.out.print("Valor inválido. Ingrese el sexo: (M/F)");
                sexo = scan.nextLine();

                if (sexo.toUpperCase().equals("M") || sexo.toUpperCase().equals("F")) {
                    break;
                }
            }

            System.out.print("1. Universitario\n2. Profesional\n3. Público General\nOpción: ");
            n = scan.nextInt();
            while (n < 1 || n > 3) {
                System.out.print("Valor inválido. Ingrese la opción: ");
                n = scan.nextInt();

                if (n >= 1 && n <= 3) {
                    break;
                }
            }

            if (n == 1) {
                nUniversitarios++;
                ingresoUniversitarios += 150 * 0.7; // Descuento del 30%
            } else if (n == 2) {
                nProfesionales++;
                ingresoProfesionales += 150 * 0.85; // Descuento del 15%
            } else if (n == 3) {
                nGeneral++;
                ingresoGeneral += 150;
            }

            if (sexo.equals("M")) {
                nHombres++;
            } else {
                nMujeres++;
            }

            ingresoTotal = ingresoGeneral + ingresoUniversitarios + ingresoProfesionales;

            System.out.print("¿Desea continuar? (S/N): ");
            opcion = scan.next();
            if (opcion.toUpperCase().equals("N")) {
                continuar = false;
            }
        }

        System.out.println("Cantidad de inscritos de cada modalidad:");
        System.out.println("Universitarios: " + nUniversitarios);
        System.out.println("Profesionales: " + nProfesionales);
        System.out.println("Público General: " + (nGeneral));
        System.out.println("Ingreso obtenido por cada modalidad:");
        System.out.println("Universitarios: " + ingresoUniversitarios);
        System.out.println("Profesionales: " + ingresoProfesionales);
        System.out.println("Público General: " + ingresoGeneral);
        System.out.println("Recaudación total: " + ingresoTotal);
        System.out.println("Total de asistentes: " + (nUniversitarios + nProfesionales + nGeneral));
        System.out.println("Cantidad de Hombres: " + nHombres);
        System.out.println("Cantidad de Mujeres: " + nMujeres);

        scan.close();
    }
}

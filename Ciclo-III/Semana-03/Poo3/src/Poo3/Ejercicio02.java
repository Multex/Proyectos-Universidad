package Poo3;

import java.util.Scanner;

public class Ejercicio02 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        String DNI, nombre, apePater, apeMater;
        int director = 0, subGerente = 0, administrativo = 0, mantenimiento = 0, nDirector = 0, nSubGe = 0, nAdmin = 0, nMante = 0, pagoTotal, tipoEmpleado;
        boolean continuar = true;

        while (continuar) {
            System.out.print("Ingrese el DNI: ");
            DNI = scan.next();
            System.out.print("Ingrese el nombre: ");
            nombre = scan.next();
            System.out.print("Ingrese el apellido paterno: ");
            apePater = scan.next();
            System.out.print("Ingrese el apellido materno: ");
            apeMater = scan.next();
            System.out.println("Ingrese el tipo de empleado");
            System.out.println("1. Director \n2. Subgerente \n3. Administrativo \n4. Mantenimiento");
            tipoEmpleado = scan.nextInt();

            switch (tipoEmpleado) {
                case 1:
                    nDirector ++;
                    director += 10000;
                    break;
                case 2:
                    nSubGe ++;
                    subGerente += 4000;
                    break;
                case 3:
                    nAdmin ++;
                    administrativo += 2000;
                    break;
                case 4:
                    nMante ++;
                    mantenimiento += 1000;
                    break;
            }

            System.out.println("¿Desea continuar? (s/n)");
            continuar = scan.next().toLowerCase().charAt(0) == 's';
        }

        pagoTotal = director + subGerente + administrativo + mantenimiento;

        System.out.println("El total de trabajadores es: " + (nDirector + nSubGe + nAdmin + nMante));
        System.out.println("El total de directores es: " + nDirector);
        System.out.println("El total de subgerentes es: " + nSubGe);
        System.out.println("El total de administrativos es: " + nAdmin);
        System.out.println("El total de mantenimiento es: " + nMante);
        System.out.println("Se pagará " + director + " soles a los directores");
        System.out.println("Se pagará " + subGerente + " soles a los subgerentes");
        System.out.println("Se pagará " + administrativo + " soles a los administrativos");
        System.out.println("Se pagará " + mantenimiento + " soles a los de mantenimiento");
        System.out.println("El total a pagar es: " + pagoTotal + " soles");
        if (pagoTotal >= 50000) {
            System.out.println("La empresa DEBERÁ de pedir un préstamo");
        } else {
            System.out.println("La empresa NO deberá de pedir un préstamo");
        }
        
        scan.close();
    }

}

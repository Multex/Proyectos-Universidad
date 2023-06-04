package Poo3;

import java.util.Scanner;

public class Ejercicio01 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        double gerentes = 0, profesionales = 0, empleados = 0;
        int tipoEmpleado;
        boolean continuar = true;

        while (continuar) {
            System.out.print("1. Gerentes \n2. Profesionales \n3. Empleados \nIngrese el tipo de empleado: ");
            tipoEmpleado = scan.nextInt();

            switch (tipoEmpleado) {
                case 1:
                    gerentes += 35;
                    break;
                case 2:
                    profesionales += 25;
                    break;
                case 3:
                    System.out.print("Ingrese la cantidad a donar: ");
                    empleados += scan.nextDouble();
                    break;
                default:
                    System.out.println("Opción no válida");
                    break;
            }
            System.out.println("¿Desea continuar? (s/n)");
            continuar = scan.next().toLowerCase().charAt(0) == 's';
        } 
        

        System.out.println("La cantidad de dinero recaudada por los gerentes es: " + gerentes);
        System.out.println("La cantidad de dinero recaudada por los profesionales es: " + profesionales);
        System.out.println("La cantidad de dinero recaudada por los empleados es: " + empleados);
        System.out.println("La cantidad total de dinero recaudada es: " + (gerentes + profesionales + empleados));

        scan.close();
    }
}
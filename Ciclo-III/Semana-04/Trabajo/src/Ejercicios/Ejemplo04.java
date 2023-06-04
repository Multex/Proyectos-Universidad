package Ejercicios;

import java.util.Scanner;

public class Ejemplo04 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int angulo;

        System.out.print("Ingrese el ángulo: ");
        angulo = scan.nextInt();

        if (angulo == 0){
            System.out.println("El ángulo es NULO");
        } else if (angulo > 0 && angulo < 90) {
            System.out.println("El ángulo es AGUDO");
        } else if (angulo == 90) {
            System.out.println("El ángulo es RECTO");
        } else if (angulo > 90 && angulo < 180) {
            System.out.println("El ángulo es OBTUSO");
        } else if (angulo == 180) {
            System.out.println("El ángulo es LLANO");
        } else if (angulo > 180 && angulo < 360) {
            System.out.println("El ángulo es CÓNCAVO");
        } else if (angulo == 360) {
            System.out.println("El ángulo es COMPLETO");
        } else {
            System.out.println("El ángulo es CÓNCAVO");
        }

        scan.close();
    }
}

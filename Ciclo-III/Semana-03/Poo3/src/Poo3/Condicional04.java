package Poo3;

import java.util.Scanner;

public class Condicional04 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int edad;
    
        System.out.print("Ingrese su edad: ");
        edad = scan.nextInt();

        if (edad >= 18) {
            System.out.println("Su DNI es de color azul");
        } else {
            System.out.println("Su DNI es de color amarillo");
        }

        scan.close();
    }
}

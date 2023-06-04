package Poo3;

import java.util.Scanner;

public class Condicional01 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int edad;
    
        System.out.print("Ingrese su edad: ");
        edad = scan.nextInt();

        if (edad >= 18) {
            System.out.println("Usted es mayor de edad");
        } else {
            System.out.println("Usted es menor de edad");
        }

        scan.close();
    }
}

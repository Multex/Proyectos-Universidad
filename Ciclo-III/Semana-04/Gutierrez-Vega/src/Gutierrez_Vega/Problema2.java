package Gutierrez_Vega;

import java.util.Scanner;

public class Problema2 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        double a, b, c, s, area;

        System.out.print("Ingrese el lado a: ");
        a = scan.nextDouble();
        System.out.print("Ingrese el lado b: ");
        b = scan.nextDouble();
        System.out.print("Ingrese el lado c: ");
        c = scan.nextDouble();
        
        if (a + b > c && a + c > b && b + c > a) {
            s = (a + b + c) / 2;
            if (s > 0) {
                area = Math.sqrt(s * (s - a) * (s - b) * (s - c));
                System.out.println("El área del triángulo es: " + area);
                System.out.println("El semiperímetro del triángulo es: " + s);
            } else {
                System.out.println("Los lados ingresados no forman un triángulo válido.");
            }
        } else {
            System.out.println("Los lados ingresados no forman un triángulo válido.");
        }

        scan.close();
    }    
}

package Gutierrez_Vega;

import java.util.Scanner;

public class Problema1 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        double Vd, Vu, I, Ra;

        System.out.print("Ingrese la tensión disponible: ");
        Vd = scan.nextDouble();
        System.out.print("Ingrese la tensión útil: ");
        Vu = scan.nextDouble();
        System.out.print("Ingrese la corriente necesaria: ");
        I = scan.nextDouble();
        
        Ra = (Vd - Vu) / I;
        System.out.println("La resistencia de absorción es: " + Ra);

        scan.close();
    }
}

package Gutierrez_Vega;

import java.util.Scanner;

public class Problema4 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        double V, I, Rt = 0;
        int n;

        System.out.print("Ingrese el voltaje: ");
        V = scan.nextDouble();
        System.out.print("Ingrese el número de resistencias: ");
        n = scan.nextInt();

        for (int i = 0; i < n; i++) {
            System.out.print("Ingrese el valor de la resistencia " + (i + 1) + ": ");
            double r = scan.nextDouble();
            Rt += 1 / r;
        }

        Rt = 1 / Rt;
        I = V / Rt;

        System.out.println("La intensidad de corriente es: " + I);

        scan.close();
    }
}

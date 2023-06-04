package Poo2;

import java.util.Scanner;

public class Caso05 {
    public static void main(String[] args) {
        
        double met, pul, cem, pie, yar;

        Scanner scan=new Scanner(System.in);
        
        System.out.print("Ingrese la cantidad de metros: ");
        met = scan.nextDouble();
        
        // Cálculo
        cem = met*100;
        pul = cem/2.54;
        pie = pul/12;
        yar = pie/3;
        
        
        // Muestra de datos
        if (met != 1){
            System.out.println(met+" metros equivalen a:");
        } else {
            System.out.println(met+" metro equivale a:");
        };
        
        System.out.println(cem+" centímetros");
        System.out.println(Math.round(pul*100)/100.0+" pulgadas");
        System.out.println(Math.round(pie*100)/100.0+" pies");
        System.out.println(Math.round(yar*100)/100.0+" yardas");

        scan.close();

    }
    
}

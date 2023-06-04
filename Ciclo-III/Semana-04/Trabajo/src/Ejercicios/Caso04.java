package Ejercicios;

import java.util.Scanner;

public class Caso04 {
    public static void main(String[] args) {
        
        //ve: grdCel
        //vs: grdFar, grdKel

        Scanner lector=new Scanner(System.in);
        
        // Declaración de variables
        double grdCel, grdFar,grdKel;
                        
        System.out.print("Ingrese la temperatura en grados Celcius: ");
        grdCel = lector.nextDouble();
        
        // Cálculo
        grdFar = (grdCel * 9/5) + 32;
        grdKel = grdCel+273;
        
        // Muestra de datos
        System.out.println(grdCel+" grados Celcius equivalen a:");
        System.out.println(grdFar+" grados Farenheit");
        System.out.println(grdKel+" grados Kelvin");

        lector.close();
    }
}

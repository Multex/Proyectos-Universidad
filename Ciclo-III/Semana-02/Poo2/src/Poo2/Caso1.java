package Poo2;

import java.util.Scanner;

public class Caso1 {
    public static void main(String[] args) {
        
        /* Desarrolar una solución que me permita ingresar un
           número de horas. Mostrar su equivalente en minutos
           y segundos.
        */

        //ve: numHoras
        //vs: min, seg
        
        //Declaración
        double numHoras, min, seg;

        Scanner lector=new Scanner(System.in);
        
        //Entrada
        System.out.print("Ingrese el número de horas: ");
        numHoras=lector.nextDouble();

        //Proceso
        min = numHoras * 60;
        seg = numHoras * 3600;

        //Salida
        System.out.println(numHoras+" horas equivalen a: "+min+" minutos");
        System.out.println(numHoras+" horas equivalen a: "+seg+" segundos");
    }   
}

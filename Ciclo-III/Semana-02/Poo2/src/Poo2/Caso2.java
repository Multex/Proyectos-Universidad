package Poo2;

import java.util.Scanner;

public class Caso2 {
    public static void main(String[] args) {
        
        /* Desarrollar una solución que permita ingresar el código,
        nombre de un curso y calcular el promedio final del curso en
        base a la siguiente fórmula:
        PF=(PP+EP+2*EF)/4
        Donde:
        PP: Promedio de prácticas (n1+n2+n3)/3
        EP: Examen parcial
        EF: Examen final
        */

        //ve: cod, nomCur, n1, n2, n3, exPar, exFin
        //vs: promPrac, promFinal

        String cod, nomCur;
        double n1, n2, n3, exPar, exFin, promPrac, promFinal;

        Scanner lector=new Scanner(System.in);
        
        System.out.print("Ingrese su código: ");
        cod=lector.nextLine();

        System.out.print("Ingrese el nombre del curso: ");
        nomCur=lector.nextLine();

        System.out.print("Ingrese la nota 1: ");
        n1=lector.nextDouble();
        
        System.out.print("Ingrese la nota 2: ");
        n2=lector.nextDouble();

        System.out.print("Ingrese la nota 3: ");
        n3=lector.nextDouble();

        System.out.print("Ingrese la nota del examen parcial: ");
        exPar=lector.nextDouble();

        System.out.print("Ingrese la nota del examen final: ");
        exFin=lector.nextDouble();

        // Calculos
        promPrac=(n1+n2+n3)/3;
        promFinal=(promPrac+exPar+2*exFin)/4;

        // Reporte
        System.out.println("CÓDIGO: "+cod);
        System.out.println("CURSO: "+nomCur);
        System.out.println("PROMEDIO FINAL: "+promFinal);
    }    
}

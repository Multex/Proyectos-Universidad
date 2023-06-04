package Ejercicios;

import java.util.Scanner;

public class Caso06 {
    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
        
        double hom, muj, total, homPorc, mujPorc;
        String nomCur;
        
        System.out.print("Ingrese el nombre del curso: ");
        nomCur = scan.nextLine();
        System.out.print("Ingrese el total de alumnos: ");
        total = scan.nextDouble();
        System.out.print("Ingrese el número de alumnos varones: ");
        hom = scan.nextDouble();
        System.out.print("Ingrese el número de alumnas mujeres: ");
        muj = scan.nextDouble();
        
        // Cálculos
        
        if((hom+muj) > total){
            System.out.print("Tus alumnos ingresados son mayores que tu total.");
            System.exit(0);
        } else if ((hom+muj) < total){
            System.out.print("Tus alumnos ingresados son menores a tu total");
            System.exit(0);
        }
        
        homPorc = (Math.round((hom/total)*100) / 100.0) *100;
        mujPorc = (Math.round((muj/total)*100) / 100.0) *100;
        
        System.out.println("En el curso "+nomCur);
        System.out.println("El porcentaje de hombres es: "+homPorc+"%");
        System.out.println("El porcentaje de mujeres es: "+mujPorc+"%");

        scan.close();
    }
}

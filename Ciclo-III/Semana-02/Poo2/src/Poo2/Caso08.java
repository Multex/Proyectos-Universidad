package Poo2;

import java.util.Scanner;

public class Caso08 {
    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
        
        double sueldoBruto, impuestos, cafeteria;
        double sueldoNeto, descuento;
        
        System.out.print("Ingrese el sueldo del obrero: ");
        sueldoBruto = scan.nextDouble();
        
        // Cálculos
        // Concepto de impuestos
        impuestos = sueldoBruto*0.14;
        
        // Concepto de cafetería
        cafeteria = sueldoBruto*0.03;
        
        // Ambos descuentos
        descuento = impuestos + cafeteria;
        
        // Sueldo neto:
        sueldoNeto = sueldoBruto - descuento;
        
        System.out.println("El descuento del empleado será: "+descuento);
        System.out.println("El sueldo neto del empleado será: "+sueldoNeto);
    
        scan.close();
    }
}

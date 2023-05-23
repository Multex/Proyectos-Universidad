package Poo2;

import java.util.Scanner;

public class Ejemplo1 {

    public static void main(String[] args) {
        
    /* Se requiere mostrar el resultado de sumar, multiplicar, restar y
        dividir dos números*/
        
    //ve: num1, num2
    //vs: suma, resta, multiplicacion, division
        
        //declaracion
        double num1, num2, suma, resta, multiplicacion, division;
                
        Scanner lector=new Scanner(System.in);
        
        //entrada
        System.out.println("Ingrese el primer número: ");
        num1=lector.nextDouble();
        
        System.out.println("Ingrese el segundo número: ");
        num2=lector.nextDouble();
        
        //proceso
        suma = num1 + num2;
        resta = num1 - num2;
        multiplicacion = num1 * num2;
        division = num1 / num2;
                
        //salida
        System.out.println("La suma es: "+suma);
        System.out.println("La resta es: "+resta);
        System.out.println("La multiplicación es: "+multiplicacion);
        System.out.println("La división es: "+division);
    }
}

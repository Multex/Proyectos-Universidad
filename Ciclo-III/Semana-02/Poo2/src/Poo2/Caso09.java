package Poo2;

import java.util.Scanner;

public class Caso09 {
    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
        
        int num, cifraCont, temp;
        
        System.out.print("Ingrese un número de 4 cifras: ");
        num = scan.nextInt();
        
        temp = num;
        cifraCont = 0;
        while(temp!=0) {
            temp = temp/10;
            cifraCont++;
        }
        if(cifraCont > 4){
            System.out.println("El número ingresado es mayor de 4 cifras!");
            System.exit(0);
        } else if(cifraCont < 4) {
            System.out.println("El número ingresado es menor de 4 cifras!");
            System.exit(0);
        }
        
        int cifra1 = num % 10;
        int cifra2 = (num / 10) % 10;
        int cifra3 = (num / 100) % 10;
        int cifra4 = (num / 1000) % 10;

        double suma = cifra1 + cifra2 + cifra3 + cifra4;

        System.out.println("La suma de las cifras es: " + suma);
     
        scan.close();
    }
}

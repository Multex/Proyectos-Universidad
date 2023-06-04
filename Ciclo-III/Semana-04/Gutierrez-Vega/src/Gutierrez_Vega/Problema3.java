package Gutierrez_Vega;

import java.util.Scanner;

public class Problema3 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        String sexo, tipoEnfermedad;
        int edad, diasInternado;
        double costoTotal, costoDia;

        System.out.print("Ingrese el sexo del paciente (M/F): ");
        sexo = scan.nextLine();
        System.out.print("Ingrese la edad del paciente: ");
        edad = scan.nextInt();
        System.out.print("Ingrese la cantidad de días internado: ");
        diasInternado = scan.nextInt();
        System.out.print("Ingrese el tipo de enfermedad: ");
        tipoEnfermedad = scan.next();

        switch (tipoEnfermedad) {
            case "Medicina":
                costoDia = 50;
                break;
            case "Urología":
                costoDia = 120;
                break;
            case "Obstetricia":
                costoDia = 130;
                break;
            case "Cardiología":
                costoDia = 250;
                break;
            default:
                costoDia = 0;
                break;
        }

        costoTotal = costoDia * diasInternado;
        
        if (sexo.equals("F") && edad < 14) {
            costoTotal *= 1.08; // Aumento del 8%
        }

        System.out.println("El costo total del paciente es: " + costoTotal);

        scan.close();
    }
}

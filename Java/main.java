import java.util.Scanner;

public class main
{
    run|debug 
    public static void main(string[]args)
    {

        Scanner Scanner = new Scanner (system.in);

        system.out println("ingrese la cantidad de tiempo en la empresa");

        int tiempo = scanner.nextint();

        if (tiempo >= 5) {
            system.out.println("usted califica para el bono de 1000");
        }
        else{

            system.out.println("usted no califica para el bono de 1000");
        }
    }
}
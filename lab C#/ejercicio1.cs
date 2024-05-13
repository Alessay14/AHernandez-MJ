using System;

class ejercicio1
{
    static void Main(string[] args)
    {
        
        Console.WriteLine("La tarjeta de biblioteca está activa? (sí/no)");
        string estado_Tarjeta = Console.ReadLine();

        if (estado_Tarjeta() == "sí")
        {
            
            Console.WriteLine("La tarjeta está activa. Puede realizar préstamos.");
        }
        else (estado_Tarjeta() == "no")
            Console.WriteLine("La tarjeta no está activa. No se permiten préstamos.");

    }
}
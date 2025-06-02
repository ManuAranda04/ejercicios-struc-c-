#include <iostream>
#include <string>
//Ejercicio 2: Clasificar personas por edad y género
//Crear un struct Persona con nombre, edad y género. Cargar un array con varias personas y determinar cuántas son menores de edad (menos de 18 años) y cuántas están jubiladas (hombres ≥65 años, mujeres ≥60 años).

struct Personas{
    std::string nombre;
    int edad;
    char genero;
};

int main(){
    int menoresDeEdad = 0;
    int jubilados = 0;

    Personas personas[5];

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Ingrese el nombre de la persona: " << std::endl;
        std::getline(std::cin, personas[i].nombre);

        std::cout << "Ingrese la edad de "<<personas[i].nombre<<":" << std::endl;
        std::cin >> personas[i].edad;

        std::cout << "Ingrese el genero (M/F) de "<<personas[i].nombre<<":" << std::endl;
        std::cin >> personas[i].genero;
    }

    for (int i = 0; i < 5; i++)
    {
        if ((personas[i].edad >= 65 && personas[i].genero == 'M') || (personas[i].edad >= 60 && personas[i].genero == 'F'))
        {
            jubilados++;
        }else if (personas[i].edad < 18)
        {
            menoresDeEdad++;
        }
    }
    
    std::cout << "En total hay "<<jubilados<<" jubilados y "<<menoresDeEdad<<" menores de edad" << std::endl;

    return 0;
}
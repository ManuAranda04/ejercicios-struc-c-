#include <iostream>
#include <string>
//Ejercicio 1: Registro de estudiantes
//Crear un struct Estudiante con nombre, edad y promedio. Carga 3 estudiantes en un array y encuentra cuál tiene el mejor promedio.

struct Estudiantes
{
    std::string nombre;
    int edad;
    float promedio;
};

int main(){
    Estudiantes estudiantes[3];
    int mayorPromedio = 0;

    for (int i = 0; i < 3; i++){
        std::cout << "Ingrese el nombre del alumno: " << std::endl;
        std::getline(std::cin, estudiantes[i].nombre);

        std::cout << "Ingrese la edad del alumno: " << std::endl;
        std::cin >> estudiantes[i].edad;

        std::cout << "Ingrese el promedio del alumno: " << std::endl;
        std::cin >> estudiantes[i].promedio;
    }

    for (int i = 0; i < 3; i++)
    {
        if (estudiantes[i].promedio > estudiantes[mayorPromedio].promedio)
        {
            mayorPromedio = i;
        }
    }
    
    std::cout << "El estudiante con mayor promedio es "<<estudiantes[mayorPromedio].nombre<<" de "<<estudiantes[mayorPromedio].edad<<" años, con un promedio de "<<estudiantes[mayorPromedio].promedio << std::endl;
    
    return 0;
}
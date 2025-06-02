#include <iostream>
#include <string>
//Ejercicio 3: Inventario 
//Crear un struct Producto con nombre, precio y cantidad. Cargar 3 productos y mostrar cuál tiene mayor valor total en stock (precio × cantidad).

struct Producto
{
    std::string nombre;
    float precio;
    int cantidad;
};


int main(){
    Producto producto[3];
    float valorTotal = 0.0f;
    float mayorValor = 0.0f;
    int productoMayorValor = 0;

    for (int i = 0; i < 3; i++)
    {
        std::cout << "Ingrese el nombre del producto: " << std::endl;
        std::getline(std::cin, producto[i].nombre);
        
        std::cout << "Ingrese el precio de "<<producto[i].nombre<< std::endl;
        std::cin >> producto[i].precio;

        std::cout << "Ingrese la cantidad de "<<producto[i].nombre<< std::endl;
        std::cin >> producto[i].cantidad;
    }
    
    for (int i = 0; i < 3; i++)
    {
        valorTotal = producto[i].precio * producto[i].cantidad;
        if (valorTotal > mayorValor)
        {
            mayorValor = valorTotal;
            productoMayorValor = i;
        }
    }

    std::cout << "El producto con mayor valor total en stock es "<<producto[productoMayorValor].nombre<<", con $"<<mayorValor<< std::endl;

    return 0;
}
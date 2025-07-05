#include "ProductoManager.h"
#include <iostream>


// Función para registrar productos y devolver la cabeza de la lista
Producto* RegistrarProducto() {
    Producto* cabeza = nullptr;
    int idContador = 1;

    // Categorías
    std::string categorias[3] = {"Juegos", "Muebleria", "Electrodomesticos"};

    // Marcas por categoría
    std::string marcas[3][3] = {
        {"Nintendo", "Sony", "Microsoft"},          // Juegos
        {"Ikea", "Home Depot", "Ashley"},            // Muebleria
        {"LG", "Samsung", "Whirlpool"}               // Electrodomesticos
    };

    // Crear productos
    for (int c = 0; c < 3; ++c) {                   // Por cada categoría
        for (int m = 0; m < 3; ++m) {               // Por cada marca
            for (int p = 1; p <= 3; ++p) {          // 3 productos por marca
                std::string descripcion = categorias[c] + " " + marcas[c][m] + " Producto " + std::to_string(p);
                float precio = 50.0f * p + 10.0f * m + 20.0f * c;  // Precio variable
                int calidad = ((p + m + c) % 5) + 1;               // Calidad entre 1 y 5

                AgregarProductos(cabeza, descripcion, marcas[c][m], categorias[c], idContador++, precio, calidad);
            }
        }
    }

    return cabeza;
}


// Función para mostrar la lista de productos
void MostrarProductos(Producto* cabeza) {
    Producto* temp = cabeza;
    while (temp != nullptr) {
        std::cout << "ID: " << temp->id
                  << ", Descripcion: " << temp->descripcion
                  << ", Marca: " << temp->marca
                  << ", Categoria: " << temp->categoria
                  << ", Precio: $" << temp->precio
                  << ", Calidad: " << temp->calidad << std::endl;
        temp = temp->siguiente;
    }
}

// Función para liberar memoria
void LiberarProductos(Producto*& cabeza) {
    while (cabeza != nullptr) {
        Producto* temp = cabeza;
        cabeza = cabeza->siguiente;
        delete temp;
    }
}

int main() {
    Producto* listaProductos = RegistrarProducto();

    std::cout << "Lista de productos registrados:\n";
    MostrarProductos(listaProductos);

    LiberarProductos(listaProductos);
    return 0;
}

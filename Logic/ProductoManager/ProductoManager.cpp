#include "ProductoManager.h"


// Función para registrar productos y devolver la cabeza de la lista
Producto* RegistrarProducto() {
    Producto* cabeza = nullptr;
    int idContador = 1;

    // Categoría Juegos
    std::string categoria = "Juegos";
    std::string marcasJuegos[3] = {"Nintendo", "Sony", "Microsoft"};
    for (int m = 0; m < 3; ++m) {
        for (int p = 1; p <= 3; ++p) {
            Producto* prod = new Producto;
            prod->categoria = categoria;
            prod->marca = marcasJuegos[m];
            prod->descripcion = categoria + " " + marcasJuegos[m] + " Producto " + std::to_string(p);
            prod->id = idContador++;
            prod->precio = 30.0f + 10.0f * p + m * 5; // Precio varía
            prod->calidad = (p + m) % 5 + 1; // Calidad entre 1 y 5
            prod->siguiente = nullptr;
            agregarProducto(cabeza, prod);
        }
    }

    // Categoría Mueblería
    categoria = "Muebleria";
    std::string marcasMuebleria[3] = {"Ikea", "Home Depot", "Ashley"};
    for (int m = 0; m < 3; ++m) {
        for (int p = 1; p <= 3; ++p) {
            Producto* prod = new Producto;
            prod->categoria = categoria;
            prod->marca = marcasMuebleria[m];
            prod->descripcion = categoria + " " + marcasMuebleria[m] + " Producto " + std::to_string(p);
            prod->id = idContador++;
            prod->precio = 100.0f + 50.0f * p + m * 20; // Precio varía
            prod->calidad = (p + m + 1) % 5 + 1;
            prod->siguiente = nullptr;
            agregarProducto(cabeza, prod);
        }
    }

    // Categoría Electrodomésticos
    categoria = "Electrodomesticos";
    std::string marcasElectro[3] = {"LG", "Samsung", "Whirlpool"};
    for (int m = 0; m < 3; ++m) {
        for (int p = 1; p <= 3; ++p) {
            Producto* prod = new Producto;
            prod->categoria = categoria;
            prod->marca = marcasElectro[m];
            prod->descripcion = categoria + " " + marcasElectro[m] + " Producto " + std::to_string(p);
            prod->id = idContador++;
            prod->precio = 200.0f + 75.0f * p + m * 30;
            prod->calidad = (p + m + 2) % 5 + 1;
            prod->siguiente = nullptr;
            agregarProducto(cabeza, prod);
        }
    }

    return cabeza;
}
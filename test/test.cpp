#include <iostream>
#include "../Core/Usuario.h"
#include "../DataStructures/ArbolBinarioBusqueda.h" 
#include "../DataStructures/ListaEnlazadaProductos.h" // Tu clase ABB
using namespace std;


int main(){

Producto* catalogo = nullptr;

AgregarProductos(catalogo, 101, "Smartphone Galaxy S20", "Samsung", 799.99, 5, "Electrónica");
AgregarProductos(catalogo, 102, "Laptop Dell Inspiron", "Dell", 999.99, 4, "Electrónica");

MostrarProductos (catalogo);

Producto* p = BuscarProductoID(catalogo, 101);
if (p) std::cout << "Producto encontrado: " << p->descripcion << std::endl;

LiberarProductos(catalogo);


return 0; 
}
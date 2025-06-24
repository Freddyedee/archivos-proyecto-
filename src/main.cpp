#include <iostream>
#include "../Core/Usuario.h"
#include "../Core/Productos.h"
#include "../DataStructures/cola.h"

int main() {
    // ===== 1. Crear un usuario y su historial =====
    Usuario usuario;
    usuario.nombre = "Ana";
    usuario.idUsuario = 1;
    usuario.historial = new Historial();  // Inicializar el historial

    // ===== 2. Crear productos de ejemplo =====
    Producto* producto1 = new Producto{
        101,                // idProducto
        4,                  // calidad (1-5)
        2999,               // precio
        "Sony",             // marca
        "Electrónica"       // categoría
    };

    Producto* producto2 = new Producto{
        102,                // idProducto
        5,                  // calidad
        1500,               // precio
        "Nike",             // marca
        "Deportes"          // categoría
    };

    // ===== 3. Probar la cola del historial =====
    std::cout << "=== Añadiendo productos al historial ===" << std::endl;
    ColaHistorial::encolar(producto1, usuario.historial);
    ColaHistorial::encolar(producto2, usuario.historial);

    // Verificar cantidad en el historial
    std::cout << "Productos en historial: " << usuario.historial->cantidad << std::endl;  // Debe ser 2

    // ===== 4. Mostrar el producto más antiguo (frente) =====
    if (!ColaHistorial::estaVacia(usuario.historial)) {
        Producto* frente = usuario.historial->primero->producto;
        std::cout << "Producto más antiguo: " << frente->marca << " - " << frente->categoria << std::endl;  // Sony - Electrónica
    }

    // ===== 5. Eliminar el producto más antiguo (desencolar) =====
    std::cout << "\n=== Eliminando producto más antiguo ===" << std::endl;
    ColaHistorial::desencolar(usuario.historial);
    std::cout << "Productos restantes: " << usuario.historial->cantidad << std::endl;  // Debe ser 1

    // Verificar el nuevo frente
    if (!ColaHistorial::estaVacia(usuario.historial)) {
        Producto* nuevoFrente = usuario.historial->primero->producto;
        std::cout << "Ahora el más antiguo es: " << nuevoFrente->marca << " - " << nuevoFrente->categoria << std::endl;  // Nike - Deportes
    }

    // ===== 6. Liberar memoria =====
    // Liberar los productos (esto debería hacerse en un ProductoManager en un proyecto real)
    delete producto1;
    delete producto2;

    // Liberar el historial del usuario
    delete usuario.historial;

    std::cout << "\n=== Memoria liberada correctamente ===" << std::endl;
    return 0;
}
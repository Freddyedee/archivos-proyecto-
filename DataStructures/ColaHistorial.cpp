#include "ColaHistorial.h"
#include <iostream>


bool ColaHistorial:: estaLlena() {
    return elementos == TAMANO_COLA;
}

bool ColaHistorial::estaVacia() {
    return elementos == 0;
}

void ColaHistorial::encolar(Producto* producto,Historial* historialusuario) {
    if (estaLlena()) {
        std::cout << "Cola llena, no se puede encolar.\n"<<std::endl;
        return;
    }
    final = (final + 1) % TAMANO_COLA; // 'final' avanza a la siguiente posición
    cola[final] = valor;             // Encolar en la nueva posición de 'final'
    elementos++;
    std::cout << "Elemento " << valor << " encolado.\n";
}

void ColaHistorial::desencolar() {
    if (estaVacia()) {
        std::cout << "Cola vacia, no se puede desencolar.\n";
        return;
    }
    std::cout << "Elemento " << cola[frente] << " desencolado.\n";
    cola[frente] = 0; // Se coloca el elemento a cero (opcional)
    frente = (frente + 1) % TAMANO_COLA; // 'frente' avanza
    elementos--;
}

void ColaHistorial::verCola() {
    if (estaVacia()) {
        std::cout << "La cola esta vacia.\n";
        return;
    }
    std::cout << "Elementos en la cola:\n";
    std::cout << "Indice: ";
    for (int i = 0; i < elementos; ++i) {
        std::cout << (frente + i) % TAMANO_COLA << (i == elementos - 1 ? " " : "     ");
    }
    std::cout << std::endl;
    std::cout << "Valor:  ";
    for (int i = 0; i < elementos; ++i) {
        std::cout << cola[(frente + i) % TAMANO_COLA] << (i == elementos - 1 ? " " : " <- ");
    }
    std::cout << std::endl;
}

void ColaHistorial::mostrarEstado() {
    std::cout << "Estado de la Cola:\n";
    std::cout << "  Frente: " << frente << std::endl;
    std::cout << "  Final:  " << final << std::endl;
    std::cout << "  Elementos: " << elementos << std::endl;
    
}


/*// Añade un producto al final del historial (como cola FIFO)
void ColaHistorial::encolar(Producto* producto, Historial* historialUsuario) {
    NodoHistorial* nuevoNodo = new NodoHistorial(producto);

    if (historialUsuario->primero == NULL) {
        historialUsuario->primero = nuevoNodo;
    } else {
        NodoHistorial* temp = historialUsuario->primero;
        while (temp->siguiente != NULL) {
            temp = temp->siguiente;
        }
        temp->siguiente = nuevoNodo;
    }
    historialUsuario->cantidad++;
}

// Elimina el producto más antiguo (frente de la cola)
void ColaHistorial::desencolar(Historial* historialUsuario) {
    if (estaVacia(historialUsuario)) return;

    NodoHistorial* temp = historialUsuario->primero;
    historialUsuario->primero = historialUsuario->primero->siguiente;
    delete temp;
    historialUsuario->cantidad--;
}

// Verifica si el historial está vacío
bool ColaHistorial::estaVacia(const Historial* historialUsuario) {
    return historialUsuario->primero == NULL;
}
*/
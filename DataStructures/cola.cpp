#include "cola.h"
#include <iostream>

// Añade un producto al final del historial (como cola FIFO)
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

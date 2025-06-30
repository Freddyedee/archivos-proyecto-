#include "PreferenciasManager.h"

Producto* generarListaRecomendados(Preferencia* preferencias, Producto* catalogo) {
    Producto* cabezaRecomendados = nullptr;
    Producto* ultimo = nullptr;

    Producto* actualProducto = catalogo;
    while (actualProducto) {
        Preferencia* actualPref = preferencias->siguiente; // si tienes cabeza dummy
        bool esRecomendado = false;

        while (actualPref && !esRecomendado) {
            if ((actualPref->tipo == "categoria" && actualProducto->categoria == actualPref->valor) ||
                (actualPref->tipo == "marca" && actualProducto->marca == actualPref->valor)) {
                esRecomendado = true;
            }
            actualPref = actualPref->siguiente;
        }

        if (esRecomendado) {
            // Crear copia del nodo producto para la lista recomendada
            Producto* nuevoNodo = new Producto(*actualProducto);
            nuevoNodo->siguiente = nullptr;

            if (!cabezaRecomendados) {
                cabezaRecomendados = nuevoNodo;
                ultimo = nuevoNodo;
            } else {
                ultimo->siguiente = nuevoNodo;
                ultimo = nuevoNodo;
            }
        }
        actualProducto = actualProducto->siguiente;
    }
    return cabezaRecomendados;
}
#include "Usuario_Manager.h"
#include <iostream>
#include "../../DataStructures/ArbolBinarioBusqueda.h"

bool RegistrarUsuario(NodoABB*& raiz, Usuario* nuevo) {
    if (ExisteUsuario(raiz, nuevo->idUsuario)) return false;
    insertarUsuario(raiz, nuevo);  // ya está ordenado por ID
    return true;
}

Usuario* login(NodoABB* raiz, int id, const std::string& contrasena) {
    Usuario* u = BuscarUserID(raiz, id);
    if (u && u->contrasena == contrasena)
        return u;
    return nullptr;
}

bool ExisteUsuario(NodoABB* raiz, int id) {
    return BuscarUserID(raiz, id) != nullptr;
}

Usuario* BuscarUserID(NodoABB* raiz, int id) {
    return BuscarUsuario(raiz, id);  // implementada en ABB
}

void MostrarUsuarioInOrden(NodoABB* raiz) {
    MostrarUsuariosINORDEN(raiz);  //  implementada en ABB
}

void liberarArbol(NodoABB*& raiz) {
    LiberarArbol(raiz);  // implementada en ABB
}
#ifndef LOGIC_USUARIOMANAGER_H
#define LOGIC_USUARIOMANAGER_H


#include "../../DataStructures/ArbolBinarioBusqueda.h"
#include <string>

bool RegistrarUsuario(NodoABB*& raiz, Usuario *nuevo); 
Usuario* login(NodoABB* raiz, int id, const std::string contrasena); 
bool ExisteUsuario(NodoABB* raiz, int id); 
Usuario* BuscarUserID(NodoABB* raiz, int id);
void MostrarUsuarioInOrden(NodoABB* raiz); 
void LiberarArbol(NodoABB*& raiz);  






#endif //LOGIC_USUARIOMANAGER_H
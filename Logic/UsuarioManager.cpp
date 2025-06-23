#include "UsuarioManager.h"
#include <iostream>


void UsuarioManager::registrarUsuario(NodoABB*& raiz,
                                    const std::string& nombre,
                                    const std::string& apellido,
                                    const std::string& usuario,
                                    const std::string& contrasena,
                                    int id){

    Usuario* nuevo = new Usuario;
    nuevo->nombre = nombre; 
    nuevo->apellido = apellido; 
    nuevo->usuario = usuario; 
    nuevo->contrasena = contrasena; 
    nuevo->idUsuario = id; 
    insertarUsuario(raiz, nuevo); 
                                        
    }

// el uso de const asegura que no se modifique el valor dentro de la funcion, se  pasa por referencia , evita la copia por lo tanto es constante no modificable, si se implemente std::string nombre es una copia completa de el string 
Usuario* UsuarioManager::iniciarSesion(NodoABB* raiz, const std::string& usuario, const std::string& contrasena) {
    if (raiz == nullptr) return nullptr;

    if (usuario == raiz->User->usuario) {
        if (contrasena == raiz->User->contrasena) {
            return raiz->User;  // Retorna puntero al usuario autenticado
        } else {
            return nullptr;  // Contraseña incorrecta
        }
    } else if (usuario < raiz->User->usuario) {
        return iniciarSesion(raiz->izquierdo, usuario, contrasena);
    } else {
        return iniciarSesion(raiz->derecho, usuario, contrasena);
    }
}

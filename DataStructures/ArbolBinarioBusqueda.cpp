#include "ArbolBinarioBusqueda.h"
#include <iostream>

void insertarUsuario(NodoABB*& raiz, Usuario* nuevo){

    if(raiz == nullptr){
        raiz = new NodoABB{nuevo, nullptr, nullptr}; //Se inicializan los capos directamente 
    }
    else if(nuevo->idUsuario < raiz -> User->idUsuario){
        insertarUsuario(raiz -> izquierdo, nuevo);  //Se inserta por la izquierda en caso de ser menor
    }
    else if(nuevo -> idUsuario > raiz -> User -> idUsuario){
        insertarUsuario(raiz -> derecho, nuevo); //Se inserta por la Derecha en caso de ser mayor
    }
    else{
        std::cout << "ID duplicado, imposible insertar."; 
    }

};

Usuario* BuscarUsuario(NodoABB* raiz, int id){

    if(raiz == nullptr){
        return nullptr; 
    }

    if(id == raiz->User->idUsuario){
        return raiz ->User; 
    }
    else if(id < raiz->User->idUsuario){
        return BuscarUsuario(raiz->izquierdo, id);
    }
    else{
        return BuscarUsuario(raiz->derecho, id); 
    }
} 

void MostrarUsuariosINORDEN(NodoABB* raiz){

    if(raiz != nullptr){
        MostrarUsuariosINORDEN(raiz -> izquierdo);
        std::cout << "Usuario: " << raiz->User->usuario << "ID: " << raiz->User->idUsuario << "\n";
        MostrarUsuariosINORDEN(raiz ->derecho); 
    }
}


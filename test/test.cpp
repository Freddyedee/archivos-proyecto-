#include <iostream>
#include "../Core/Usuario.h"
#include "../DataStructures/ArbolBinarioBusqueda.h"  // Tu clase ABB
using namespace std;


int main(){

NodoABB* raiz = nullptr; // Inicializa el árbol vacío
Usuario* u1 = new Usuario;

cout << "Ingresa el nombre para el usuario: "  << endl; 
cin >> u1->nombre; 
cout << "Ingresa el apellido para el usuario: " << endl; 
cin >> u1->apellido; 
cout << "Ingresa el nombre de usuario para el usuario: " << endl ; 
cin >> u1->usuario; 
cout << "Ingresa la contraseña para el usuario: " << endl; 
cin >> u1->contrasena; 

//insertar nodo 

insertarUsuario(raiz, u1); 

cout << "Usuario insertado (in order): " << endl; 
MostrarUsuariosINORDEN(raiz); 

cout << "Presiona Enter para salir...";
cin.get();
cin.get();

return 0; 
}
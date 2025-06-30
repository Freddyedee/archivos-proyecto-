#include "ListaEnlazadaPreferencias.h"
#include <iostream>

void AgregarPreferencia(Preferencia* preferencia){

    // if (buscarPreferencia(cabeza, tipo, valor)) return; 

    Preferencia* nuevo = new Preferencia{preferencia->tipo, preferencia->valor,nullptr}; // Se inicializa el struct de preferencia, se pasa los valores de tipo y valor, siguente = nullptr ;
    
    if(!preferencia->siguiente){
        preferencia->siguiente = nuevo; 
    }
    else{
        Preferencia* actual = preferencia->siguiente; 
        while(actual -> siguiente) {
            actual = actual->siguiente;  
        }
        actual->siguiente = nuevo;
    }    
    
}; 

void mostrarPreferencias(Preferencia* preferencia){

    const Preferencia* actual = preferencia->siguiente; 
    while(actual){
        std::cout << actual->tipo << ": " << actual -> valor << std::endl; 
        actual = actual->siguiente; 
    }
} ; 

void LiberarPreferencias(Preferencia* preferencia){
    
    while(preferencia->siguiente){
        Preferencia* temp = preferencia->siguiente; 
        preferencia->siguiente = preferencia->siguiente ->siguiente; 
        delete temp; 
    }
    preferencia->siguiente = nullptr; 
}; 

bool buscarPreferencia(Preferencia* preferencia){

    const Preferencia* actual = preferencia->siguiente; 
    while(actual){
        if(actual->tipo == preferencia->tipo && actual->valor == preferencia->valor){
            return true;
            actual = actual ->siguiente;  
        }
    }
    return false; 
} 

bool EliminarPreferencia(Preferencia* preferencia){

    Preferencia* actual = preferencia->siguiente; 
    Preferencia* anterior = nullptr;

    while(actual){

        if(actual ->tipo == preferencia->tipo && actual->valor == preferencia->valor){
            if(anterior){
                anterior -> siguiente = actual -> siguiente; 
            }
            else{
                preferencia->siguiente = actual -> siguiente; 
            }

            delete actual; 
            return true;
        }
        anterior = actual; 
        actual = actual ->siguiente; 
    }

    return false; 
}

int ContarPreferencias(Preferencia* preferencia){

    int contador =0 ; 
    const Preferencia* actual = preferencia->siguiente; 
    while(actual){
        contador ++; 
        actual = actual ->siguiente; 
    }
    return contador;
}




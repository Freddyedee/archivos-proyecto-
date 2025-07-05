#include "BusquedaManager.h"


//FUNCION GENERAL QUE CREA UNA LISTA NUEVA DE LOS PRODUCTOS QUE COINCIDEN CON LA BUSQUEDA
    //Recibe la cabeza para recorrer la lista del catalogo, recibe una funcion y los parametros de dicha funcion; 
    //La logica es que como hay distintos tipos de busqueda que validan cosas distintas, solo reciba la funcion que valide lo necesario
    //Asi es como se Declara funciones en parametros de otras funciones 
    //TipoDeDatoQueRetorna (*nombre de la funcion)(Parametros de la funcion)
    //De ultimo recibe El criterio que seria lo que busca el usuario como "Samsung", "15$" o "Muebles"
    Producto* BuscarProducto(Producto* cabeza, bool(*funcion)(Producto*, void*), void* criterio){
        Producto* nuevo = new Producto; //Inicializar la nueva lista en la que se van a guardar los productos encontrados
        Producto* actual = cabeza;

        while(actual->siguiente != nullptr){
            if(funcion(actual, criterio)){
                AgregarProductos(nuevo, *actual);
            }
            actual = actual->siguiente;
        }
        return nuevo;
    }

    bool BuscarPorMarca(Producto* producto, void* criterio){
        auto* categoria = static_cast<std::string*>(criterio);
        return producto->marca == *categoria;
    }

    bool BuscarPorCategoria(Producto* p, void* criterio) {
        auto* categoria = static_cast<std::string*>(criterio);
        return p->categoria == *categoria;
    }

    bool filtrarPorRangoPrecio(Producto* p, void* criterio) {
        auto* rango = static_cast<std::pair<float, float>*>(criterio);
        return p->precio >= rango->first && p->precio <= rango->second;
    }

    //Varias opciones, distancia de levenstein, busqueda por lista...
    bool filtrarPorDescripcion(Producto* p, std::string* criterio) {
        return p->descripcion.find(*criterio) != std::string::npos;
    }
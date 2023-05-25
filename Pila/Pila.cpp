#include <iostream>
using namespace std;
struct Nodo {
    int dato;
    Nodo* siguiente;
};
class Pila {
private:

    Nodo* cima;

public:
    Pila() {
        cima = nullptr;
    }
    void push(int dato) {
        Nodo* temp = new Nodo;
        temp->dato = dato;
        temp->siguiente = cima;
        cima = temp;
    }

    void pop() {
        if (cima) {
            Nodo* nodoEliminar = cima;
            cima = cima->siguiente;
            delete nodoEliminar;
        }
    }

    int top() {
        if (cima == nullptr) {
            cout << "la pila esta vacia" << endl;
            return -1;
        }
            return cima->dato;
    }
    void mostrar()
    {
        if (cima == nullptr)
        {
            std::cout << "La lista esta vacia\n";
            return;
        }

        Nodo* apunta = cima;
        while (apunta != nullptr)
        {
            std::cout << "[ " << apunta->dato << " ]-> ";
            apunta = apunta->siguiente;
        }
        std::cout << "[NULL] ";
    }
    
};

int main() {
    Pila pila;
   pila.push(1);
    pila.push(2);
    pila.push(3);

    cout << pila.top() << endl;

    pila.pop();
    cout  << pila.top() << endl;

    return 0;
}
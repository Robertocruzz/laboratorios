/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: roberto
 *
 * Created on November 15, 2019, 11:58 AM
 */

#include <iostream>
#include <vector>

using namespace std;

struct nodo{
    int info;
    struct nodo *izq;
    struct nodo *der;
};
typedef struct nodo Nodo;
typedef struct nodo *Arbol;

vector<int> v;

Arbol crearArbol(int x){
    Arbol p = new Nodo;
    p->info = x;
    p->izq = NULL;
    p->der = NULL;
    return p;
}

void asignarIzq(Arbol a, int unDato){
    if(a == NULL)
        cout << "Error: arbol vacio" << endl;
    else if(a->izq != NULL)
        cout << "Error: subarbol IZQ ya existe" << endl;
    else
        a->izq = crearArbol(unDato);
}

void asignarDer(Arbol a, int unDato){
    if(a == NULL)
        cout << "Error: arbol vacio" << endl;
    else if(a->der != NULL)
        cout << "Error: subarbol DER ya existe" << endl;
    else
        a->der = crearArbol(unDato);
}

int agregarNodo(Arbol a){
    int numero = 0;
    cout << "Numero a agregar: ";
    cin >> numero;
    
    Arbol p = a;
    
    while(true){
        if(numero == p->info){
            cout << "Error: " << numero << " ya existe" << endl;
            return 0;
        }
        else if(numero < p->info){
            if(p->izq == NULL)
                break;
            else
                p = p->izq;
        }
        else{
            if(p->der == NULL)
                break;
            else
                p = p->der;
        }
    }
    
    if(numero < p->info)
    	asignarIzq(p, numero);
    	
    else
    	asignarDer(p, numero);
    	
    return numero;
}


void agregarNodoInv(Arbol a, vector<int> v, int i){
    int numero = v[i];
    
    Arbol p = a;
    
    while(true){
        if(numero == p->info){
            cout << "Error: " << numero << " ya existe" << endl;
            return;
        }
        else if(numero < p->info){
            if(p->der == NULL)
                break;
            else
                p = p->der;
        }
        else{
            if(p->izq == NULL)
                break;
            else
                p = p->izq;
        }
    }
    
    if(numero < p->info)
    	asignarDer(p, numero);
    	
    else
    	asignarIzq(p, numero);
    
}

void pre_orden(Arbol a){
    if(a != NULL){
        cout << " " << a->info;
        pre_orden(a->izq);
        pre_orden(a->der);
    }
}
void in_orden(Arbol a){
    if(a != NULL){
        in_orden(a->izq);
        cout << " " << a->info;
        in_orden(a->der);
    }
}
void post_orden(Arbol a){
    if(a != NULL){
        post_orden(a->izq);
        post_orden(a->der);
        cout << " " << a->info;
    }
}

void recorrerArbol(Arbol a, Arbol b){
	int i = 0;
    cout << "Recorrido en PRE orden:"; pre_orden(a); cout << endl;
    cout << "Recorrido en IN orden:"; in_orden(a); cout << endl;
    cout << "Recorrido en POST orden:"; post_orden(a); cout << endl;
    cout << "Recorrido en IN orden del arbol intercambiado:"; in_orden(b); cout << endl;
}

int main(){
	
    int variable = 0;
    int s = 0, cont = 1;
    cout<<"Inicializando arbol...\nValor contenido en la raiz: ";
    cin >> variable;
    v.push_back(variable);
    
    Arbol arbol = crearArbol(variable);
    Arbol arbolInv = crearArbol(variable);
    
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar\n\t2) Recorrer"
            << "\n\t3) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1:
            v.push_back(agregarNodo(arbol));
            agregarNodoInv(arbolInv, v, cont);
            cont++;
            break;
            case 2: recorrerArbol(arbol, arbolInv);
            break;
            case 3: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
    
    return 0;
}
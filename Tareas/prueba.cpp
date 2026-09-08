#include <iostream>
#include <set>
#include <vector>

using namespace std;

class Medicamento{

private: 

    string nombre; 
    int precioUnitario; 
    int stock;

public: 

    Medicamento(){

        string nombre = "Sin nombre";
        int precioUnitario = 0; 
        int stock = 0; 

    }

    Medicamento(string nombre, int precioUnitario, int stock){

        this -> nombre = nombre;
        this -> precioUnitario = precioUnitario; 
        this -> stock = stock;

    }

    string getNombre(){

        return nombre; 

    }

    int Despachar(int cantiad){

        int cantidad; 
        cin >> cantidad; 

        if (stock >= cantidad){

            stock -= cantidad; 
            return true; 

        }
        else {

            return false; 

        }
    }

    int ValorInventario(){

        return (precioUnitario * stock );

    }
};

int main (){

    int M; 
    int cantidadComandos;
    string comando; 

    cin >> M;
    cin >> cantidadComandos; 

    for (int i = 0; i < M; i++){

        cin >> comando; 

    }

    return 0; 
}

// g++ probar.cpp -o probar
// .\probar.exe
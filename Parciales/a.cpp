#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <queue>
#include <numeric>

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
    cin >> M; 

    vector<Medicamento> inventario; 
    queue<pair<string,int>> pedidos;

    for (int i = 0; i < M; i++){

        string comando; 
        cin >> comando;

        if (comando == "pedido"){
 
            string nombre; 
            int cantidad; 
            cin >> nombre;
            cin >> cantidad; 
            
            pedidos.push({nombre, cantidad});

            if (pedidos.empty()){

                cout << "No hay pedidos pendientes" << '\n';

            }
            


        }
        if (comando == "agregar"){

            string nombre; 
            int precio; 
            int stock; 
            cin >> precio >> stock; 
            cin >> nombre;  

            Medicamento(nombre, precio, stock);
        

        }
        if (comando == "procesar"){

            pair<string, int> a = pedidos.front();
            find(inventario.begin(), inventario.end(), a);

            pedidos.pop();

        }
        if (comando == "inventario"){

            for (auto a : inventario){

                auto suma = accumulate(inventario.begin(), inventario.end(), 0);

            }
        }
    }    
    return 0; 
}


// g++ probar.cpp -o probar
// .\probar.exe
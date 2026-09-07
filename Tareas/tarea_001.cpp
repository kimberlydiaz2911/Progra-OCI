#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

class EstacionMetereologica{

// atributos privados
private:

    string nombre;
    vector<double> temperaturas;

public: 

// contructor por defecto 
    EstacionMetereologica(){

//declara sin nombre al nombre
        this-> nombre = "Sin nombre";
        
    }

//constructor parametrizado
    EstacionMetereologica(string nombre){

        this-> nombre = nombre; 

    }

// metodo de registro de tempe
    bool registrarLectura(double temperatura){

//si la tempe es entre ambos valores 
        if(temperatura >= -50 && temperatura <= 0 ){

//si se cumple se agrega a la temperatura y retorna true
            temperaturas.push_back(temperatura);
            return true;

        }

        if (temperatura >= 0 && temperatura <=60){

//si se cumple se agrega a la temperatura y retorna true
            temperaturas.push_back(temperatura);
            return true;


        }
//si no se cumple se returna falso solamente

        else{

            return false;

        }
    }

// metodo promedio
    double promedio(){

//si la temperatura es vacio returna 0
        if (temperaturas.empty()){

            return 0;

        }
// si si hay temperaturas calcular el promedio y retornarlo
        else{

            double promedio = accumulate(temperaturas.begin(), temperaturas.end(), 0.0);
            return promedio / temperaturas.size();

        }
    }

// metodo de maximo
    double Maxima(){

//si la temperatura esta vacia
        if (temperaturas.empty()){

            return 0; 

        }

// si no esta vacia se revisa el maximo de estas y se retorna
        else{

            double maximo =* max_element(temperaturas.begin(), temperaturas.end());
            return maximo;

        }
    }

// se crea el getter para la cantidad de lecturas
    int getCantidadLecturas(){

// retorna el valor de la longitud del vector
        return temperaturas.size();

    }

// se crea el getter para el nombre de la estacion
    string getNombreEstacion(){

// retorna el nombre
        return nombre;

    }
};


int main(){

    string nombre; 
    cin >> nombre; 

    EstacionMetereologica EstacionMetereologica (nombre);

    int M; 
    cin >> M;

    for (int i = 0; i < M; i++){

        string cualQuiere; 
        cin >> cualQuiere;

        if (cualQuiere == "registrar"){

            double temperatura; 
            cin >> temperatura; 

            bool registro = EstacionMetereologica.registrarLectura(temperatura);

            if (registro == true){

                cout << "Lectura registrada: " << temperatura << '\n'; 

            }
            else{

                cout << "La temperatura debe de estar en el rango de -50 y 60 Celsius" << '\n';

            }
        }

        if (cualQuiere == "promedio"){

            double promedio = EstacionMetereologica.promedio(); 

            if (EstacionMetereologica.getCantidadLecturas() > 0){

                cout << "Promedio: " << EstacionMetereologica.promedio() << '\n';

            }
            else {

                cout << "Sin lecturas registradas" << '\n';

            }
        }

        if (cualQuiere == "maximo"){

            double maxima = EstacionMetereologica.Maxima();
            if (EstacionMetereologica.getCantidadLecturas() > 0){

                cout << "Maxima: " << EstacionMetereologica.Maxima() << '\n';

            }
            else{

                cout << "Sin lecturas registradas" << '\n';

            }
        }

        if (cualQuiere == "cantidad"){

            cout << EstacionMetereologica.getNombreEstacion() << " lecturas registradas: " 
            <<  EstacionMetereologica.getCantidadLecturas() << '\n';

        }
}

return 0; 

}

// g++ probar.cpp -o probar
// .\probar.exe
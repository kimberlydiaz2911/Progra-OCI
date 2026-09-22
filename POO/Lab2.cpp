// Polimorfismo

#include <iostream>
#include <string>

using namespace std; 

class Mascota{

protected: 
    string nombre; 
    int edad; 

public: 
    Mascota(string nombre, int edad){

        this -> nombre = nombre; 
        this -> edad = edad; 

    }

    void informacion() {

        cout << "El perro se llama " << nombre << "su edad es " << edad << '\n';

    }

};

class Perro : public Mascota {

private:  
    string raza;

public: 

    Perro(string nombre, int edad, string raza)
        : Mascota(nombre, edad){

        this -> raza = raza;

        }
        
        void informacion() {

            Mascota :: informacion(); 
            cout << "La raza es " << raza;

        }
};

class Gato : protected Mascota {

private: 
    bool interior; 

public: 
    Gato(string nombre, int edad, bool interior) 
    : Mascota(nombre, edad){

        this-> interior = interior; 

    }

    void informacion() {

        Mascota :: informacion(); 
        if (interior == 0){

            cout << "El gato " << nombre << " no es de interior" << '\n';
        }
        if (interior == 1){

            cout << "El gato " << nombre << " si es de interior" << '\n';

        }
    }
};

int main (){

    int N; 
    string mascota; 
    cin >> N; 

    string perro; 
    string gato; 

    for (int i = 0; i < N; i++){

        cin >> mascota; 

        if (mascota == "perro"){

            int edad; 
            string raza;

            cin >> edad; 
            cin >> raza;

            Perro perro(string nombre, int edad, string raza);


        }
        if (mascota == "gato"){

            int edad; 
            bool interior; 

            cin >> edad; 
            cin >> interior; 

            Gato gato(string nombre, int edad, bool interior);



        }
    }



    return 0; 
}



// Polimorfismo

#include <iostream>
#include <string>
#include <vector>

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

int main() {

int N;
cin >> N;

for (int i = 0; i < N; i++) {

    string tipo;
    string nombre;
    int edad;

    cin >> tipo >> nombre >> edad;

    if (tipo == "perro") {
        string raza;
        cin >> raza;

        Perro p(nombre, edad, raza);
        p.informacion();
    } 
    else if (tipo == "gato") {
        int interior;
        cin >> interior;

        Gato g(nombre, edad, interior);
        g.informacion();
    }
}
return 0;
}



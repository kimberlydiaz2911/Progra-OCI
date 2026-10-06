// Cada foto es una fila de pixeles, cada pixel es un valor entero entre 
// 0 y 255. 

// Negro equivale a 0 
// Gris equivale a 128 
// Blanco equivale a 255 

// Primero se debe de aclarar, luego pasar a blanco y negro, ya que el orden SI importa

#include <iostream>
#include <vector>
#include <string>

using namespace std; 


class Filtro {

protected: 
    
    string nombre; 

public: 

    Filtro (string nombre){

        this -> nombre = nombre;
        //~nombre; 

    }
    virtual ~ Filtro(){}


    string getNombre(string nombre){

        cout << nombre;

    }

    virtual int aplicar(int pixel) {

        cout << pixel;

    }

};

class Brillo : public Filtro{

private: 

    int cantidad; 

public: 

    Brillo (int cantidad)
    : Filtro(nombre){

        this -> cantidad = cantidad; 

    }


    int aplicar(int pixel) override{

        int nuevoPixel = pixel + cantidad; 

//Si la cantidad hace que el nuevo pixel sea mayor que el rango permitido
//Recortar hasta el rango permitido, en este caso 255.
        if (nuevoPixel > 255){
            
            nuevoPixel = 255;

        }

        else if (nuevoPixel < 0){

            nuevoPixel = 0; 

        }

        cout << nuevoPixel; 

    }

};


class Negativo : public Filtro{

public: 

// No lleva nada el constructor porque no tiene atributos 
// propios, por eso solo se le asigna el nombre que es el heredado. 

    Negativo()
    : Filtro(nombre){

    }


    int aplicar(int pixel) override{

        int nuevoPixel = 255 - pixel;  


//No se necesita cambiar el nuevo pixel, ya que si el pixel original 
//esta en un rango de 255, si se le quita el 255 no puede quedar en un rango 
//diferente. 

        cout << nuevoPixel; 

    }

};


class Umbral : public Filtro{

private: 

    int limite; 

public: 

    Umbral (int limite)
    : Filtro(nombre){

        this -> limite = limite; 

    }

    int aplicar(int pixel) override{

        if (pixel >= limite){

            pixel = 255; 

        }
        else {
        
            pixel = 0; 

        }

        cout << pixel; 

    }

};

class Imagen{

private: 

    vector <int> pixeles; 

public: 

    Imagen(vector<int> pixeles){

        this -> pixeles = pixeles; 

    }

    void trasformar (Filtro* filtro){

        

    }

    int mostrar(){

        cout << vector<pixeles> << '\n';

    }

};



int main() {

vector <Filtro*> catalogo; 
vector <Filtro*> cadena;

int N; 
cin >> N; 
int pixeles; 
string comandos; 
cin >> comandos; 

for (int i = 0; i < N; i ++ ){

    cin >> pixeles; 



}

int M; 

for (int i = 0; i < M; i ++){
   
}

    if (comandos == "crear"){

        int valor; 
        cin >> valor; 

    Fitro* ptr = new filtro("crear", 1); 

}
    else if (comandos == "usar"){

}
}
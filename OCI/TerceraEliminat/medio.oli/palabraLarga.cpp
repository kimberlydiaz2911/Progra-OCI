#include <iostream>
#include <string>

using namespace std; 

int main (){

    string cadena; 
    string palabra; 

    cin >> cadena; 
    cin >> palabra; 

    int n = cadena.size(); 
    int m = palabra.size(); 

    if (m > n){

        cout << 0; 
        return 0; 

    }

    int obj[26] = {};
    int vent[26] = {}; 

    for (char c : palabra){

        obj[c - 'a'] ++; 

    }

    for (int i = 0; i < 26; i ++){
    
        vent[obj[i] - 'a']++; 

    }

    int respuesta = 0; 

    for (int i =0; i < 25; i++){

        bool iguales = true; 

        for (int j = 0; i < 26; j++ ){

            if (obj [j] != vent[j]){

                iguales = false; 
                break; 

            }
        }

    

    if (iguales) respuesta++; 

    if (i < n -m ){

        vent[obj[i] - 'a']--; 
        vent[obj[i + m] - 'a'] ++; 

    }
    }
    
    cout << respuesta; 

    return 0; 

}
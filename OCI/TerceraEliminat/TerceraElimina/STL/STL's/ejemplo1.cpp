#include <iostream>
#include <map>
#include <string>
using namespace std; 

const int N = 5; 

int main () {
    map<string, int> frecuencia; 

    for (int i = 0; i < N; i ++){
        
        string palabra; 
        cin >> palabra;

        frecuencia[palabra] ++; 

    }

    for (const auto& [palabra, cantidad] : frecuencia) {

        cout << palabra << ": " << cantidad << '\n';
    }
    
    return 0; 

}
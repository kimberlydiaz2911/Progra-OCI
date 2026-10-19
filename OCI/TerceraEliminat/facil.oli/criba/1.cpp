// la criba de Eratostenes es importante en progra
// La criba se utiliza para encontrar los numeros primos hasta un limite 
// Para imprimir toods los numeros primos en un rango


#include <iostream>
#include <vector>

using namespace std; 

int main (){

    int N; 
    cin >> N; 

    vector<bool> primo(N + 1, true); 
    primo[0] = false; 

    if (N >= 1){

        primo[1] = false; 

    }

    for (int i =2; 1LL * i * i <= N; i++){

        if (primo[i]){

            cout << i << " ";

        }

    }

    cout << '\n'; 

    return 0; 

}
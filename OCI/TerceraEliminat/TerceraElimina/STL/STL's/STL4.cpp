#include <iostream>
#include <set>
#include <algorithm>

using namespace std;


const int N = 10;


int main (){

    set<int> lista; 
        
    for (int i = 1; i < N; i++){

        int numero; 
        cin >> numero; 

        lista.insert(numero);

    }

    for (auto it = lista.begin(); it != lista.end(); ++it){

        cout << *it << '\n';

    }

    int adicional; 
    cin >> adicional; 

    auto it = find(lista.begin(), lista.end(), adicional);

    if (it != lista.end()){

        cout << "numero encontrado" << '\n';

    }
    else {

        cout << "Numero no encontrado" << '\n';

    }

return 0;


}
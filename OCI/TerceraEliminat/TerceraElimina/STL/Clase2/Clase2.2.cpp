#include <iostream>
#include <set>
#include <algorithm>

using namespace std; 

const int N = 5;

int main (){

    set<string> nombres;

    for (int i = 0; i < N; i++){

        string nombre;
        cin >> nombre; 
        nombres.insert(nombre);

    }

    string dadoBaja;
    cin >> dadoBaja;

    auto it = find(nombres.begin(), nombres.end(), dadoBaja);
    if (it != nombres.end()){

        nombres.erase(it); 
        
    }
    else {

        cout << dadoBaja << "No estaba inscrito" << '\n';

    }

    for (auto it = nombres.begin(); it != nombres.end(); ++it){

        cout << *it << '\n';

    }
    return 0; 
}
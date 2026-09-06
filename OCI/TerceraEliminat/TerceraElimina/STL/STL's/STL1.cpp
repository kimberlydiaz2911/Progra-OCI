#include <iostream>
#include <set>
#include <algorithm>

using namespace std; 

const int N = 6;

int main (){

    set<string> nombres; 

    for (int i = 0; i < N; i ++){

        string nombre; 
        cin >> nombre; 
        nombres.insert(nombre);

    }

    string deseaRetiro; 
    cin >> deseaRetiro; 


    auto it = find(nombres.begin(), nombres.end(), deseaRetiro);
    if (it != nombres.end()){

        nombres.erase(it);
        cout << "Estudiante eliminado" << '\n';

    }

    else {

        cout << "Estudiante no encontrado" << '\n';

    }

    for (auto it = nombres.begin(); it != nombres.end(); ++it ) {

        cout << *it << '\n';

    }

    return 0; 
}
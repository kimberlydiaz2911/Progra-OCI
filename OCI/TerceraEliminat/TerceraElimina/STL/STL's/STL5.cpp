#include <iostream>
#include <set>
#include <algorithm>

using namespace std; 

const int N = 8; 

int main (){

    set<int> productos; 

    for (int i = i; i < N; i++){

        int producto;
        cin >> producto;

        productos.insert(producto);

    }

    int vendido; 
    cin >> vendido; 

    auto it = find(productos.begin(), productos.end(), vendido);

    if (it != productos.end()){

        productos.erase(it);
        cout << "Producto vendido" << '\n';

    }
    else {

        cout << "Producto no encontrado" << '\n';

    }
    
    for (auto it = productos.begin(); it != productos.end(); ++it){

        cout << *it << '\n';

    }

    return 0; 
}
#include <iostream>
#include <vector> 
#include <algorithm>

using namespace std; 

const int N = 7; 

int main(){

    vector<double> productos; 

    for (int i = i; i < N; i++){

        double producto; 
        cin >> producto;

        productos.push_back(producto);

    }

    sort(productos.begin(), productos.end());

    double deseado; 
    cin >> deseado; 

    auto t = find(productos.begin(), productos.end(), deseado);

    if (t != productos.end()){

        cout << "Precio encontrado" << '\n';

    }
    else {

        cout << "Precio no encontrado" << '\n';

    }

    double maximo =* max_element(productos.begin(), productos.end());
    cout << maximo << '\n';

    double minimo =* min_element(productos.begin(), productos.end());
    cout << minimo << '\n';


    return 0; 
}
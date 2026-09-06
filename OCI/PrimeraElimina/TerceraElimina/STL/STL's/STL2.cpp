#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

const int N = 8; 

int main (){

    vector<int> calificaciones; 

    for (int i = 0; i < N; i++){

        int calificacion;
        cin >> calificacion;
        calificaciones.push_back(calificacion);

    }

    sort(calificaciones.begin(), calificaciones.end());

    int adicional;
    cin >> adicional;

    auto it = find(calificaciones.begin(), calificaciones.end(), adicional);
    if (it != calificaciones.end()){

        cout << "Calificacion encontrada" << '\n';

    }
    else {

        cout << "Calificacion no encontrada" << '\n';

    }

    int maximo =* max_element (calificaciones.begin(), calificaciones.end());
    cout << maximo << '\n';

    int minimo =* min_element (calificaciones.begin(), calificaciones.end());
    cout << minimo << '\n';

}
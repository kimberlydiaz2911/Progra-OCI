#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

const int N = 6;

int main (){

    vector<int>notas;

    for (int i = 0; i < N; i ++){
        int nota; 
        cin >> nota;
        notas.push_back(nota);

    }
    
    sort(notas.begin(), notas.end());

    int notaAdici;
    cin >> notaAdici; 

    auto it = find(notas.begin(), notas.end(), notaAdici);
    if (it != notas.end()) {

        cout << "Obtenida" << '\n';
    }
    else {

        cout << "No obtenida" << '\n';

    }

    int max =* max_element (notas.begin(), notas.end());
    cout << max << '\n';

    int min =* min_element(notas.begin(), notas.end());
    cout << min << '\n';


    return 0; 
}
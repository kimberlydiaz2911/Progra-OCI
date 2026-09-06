#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

const int N = 10;

int main(){

    vector<int> tiempo;

    for (int i = i; i < N; i++){

        int segundos; 
        cin >> segundos;
        tiempo.push_back(segundos);

    }

    sort(tiempo.begin(), tiempo.end());

    for(auto it = tiempo.begin(); it != tiempo.end(); ++it){

        cout << *it << '\n';

    }

    int adicional; 
    cin >> adicional;

    auto it = find(tiempo.begin(), tiempo.end(), adicional);

    if (it != tiempo.end()){

        cout << "Tiempo encontrado" << '\n';

    }
    else {

        cout << "Tiempo no encontrado" << '\n';

    }

    int max =* max_element(tiempo.begin(), tiempo.end());
    cout << max << '\n';

    int min =* min_element(tiempo.begin(), tiempo.end());
    cout << min << '\n';

    return 0; 

}
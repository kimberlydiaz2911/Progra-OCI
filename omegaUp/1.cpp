#include <iostream>

using namespace std; 

int main(){

    // dos grupos de dos personas cada uno y entrenar separados.

    // nivel de habilidad
    int a, b, c, d; 
    cin >> a >> b >> c >> d; 

    int d1 = abs((a + b) - (c + d));
    int d2 = abs((a + c) - (b + d));
    int d3 = abs((a + d) - (b + c));

    cout << min({d1, d2, d3}) << '\n';

    return 0; 

}
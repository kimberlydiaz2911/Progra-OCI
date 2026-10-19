#include <iostream>

using namespace std; 

int main (){

    long long p, q, h, t; 

    cin >> p >> q >> h >> t; 

    // se hace una variable cantidad, esta sera con long long
    // por lo extenso que tienen los numeros. 
    // este sera la hora final menos la hora incial mas uno, ya que
    // incluye la misma hora final o inicial. 
    
    long long cantidad = q - p + 1;

    // long long resultado para que sea igual de extenso
    // esta sera, la hora actual, menos la hora inicial mas 
    // las horas que deben de ser agregadas, y a esto se le aplica 
    // el modulo de la cantidad de cantidad mas las horas inciales

    long long resultado = (h - p + t) % cantidad + p;

    cout << resultado << '\n';

    return 0; 

}
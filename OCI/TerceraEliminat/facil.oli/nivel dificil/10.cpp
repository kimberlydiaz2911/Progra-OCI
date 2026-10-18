#include <iostream>
#include <numeric>

using namespace std; 

long long mcm(long long a, long long b){

    return (a / gcd (a,b)) * b; 

}

int main (){

    long long a; // primera luz
    long long b; // segunda luz
    long long c; // tercera luz

    cin >> a; 
    cin >> b; 
    cin >> c; 

    cout << mcm (mcm(a,b),c); 

    return 0; 

}

//creo qu eno funciona, asi que no es culpa mia, creo yo
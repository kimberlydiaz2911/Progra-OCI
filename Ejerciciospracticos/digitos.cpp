#include <iostream>
#include <cmath>

using namespace std; 

int main(){

    long long n; 
    cin >> n; 

    // se debe de calcular la suma de todos los digitos de n
    long long suma = 0;

    while(n > 0){

        suma += n % 10;
        n /= 10; 

    }

    cout << suma; 

    return 0; 

}
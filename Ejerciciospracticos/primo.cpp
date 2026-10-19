#include <iostream>
#include <cmath>

using namespace std; 

int main (){

    long long n; 
    cin >> n; 

    if (n <= 1){

        cout << "NO"; 

    }
    
    
    for (int i = 2; i * i <= n; i ++){

        if (n % i == 0){

            // si alguno resulta ser un divisor no sera primo 
            cout << "NO";
            return 0; 

        }
    }

    cout << "SI";

    return 0; 

}
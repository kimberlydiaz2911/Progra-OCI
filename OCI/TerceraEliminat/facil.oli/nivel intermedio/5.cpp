#include <iostream>

using namespace std; 

int main (){

    long long N, a, k; 

    // si k = + sube 
    // si k = - baja

    if (k > 0){

        int c = a + k; 
        double cc = c % N -1; 

        cout << cc; 

    }
    else if (k < 0){

        int b = a - k; 
        double bb = b % N -1;

        cout << bb; 

    }

    return 0; 

}
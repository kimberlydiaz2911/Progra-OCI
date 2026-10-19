#include <iostream>

using namespace std; 

bool esPrimo(int n){

    if (n < 2){

        return false; 

}

    for (int d =2; d * d <= n; d++){

        if (n % d == 0){

            return false; 

        }
    }

    return true;

}


int main(){

    long long n; 
    cin >> n; 

    if (esPrimo(n)){

        cout << "SI";

    }
    else{

        cout << "NO"; 

    }


    return 0; 

}
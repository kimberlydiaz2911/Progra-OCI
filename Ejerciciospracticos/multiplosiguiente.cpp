#include <iostream>

using namespace std; 

int main(){

    long long n, k; 
    cin >> n >> k; 

    int residuo = n % k; 

    if (residuo == 0){

        cout << n; 

    }
    else {

        cout << n + (k - residuo) << '\n'; 

    }


    return 0; 

}
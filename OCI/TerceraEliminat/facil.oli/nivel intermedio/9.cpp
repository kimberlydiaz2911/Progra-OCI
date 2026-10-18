#include <iostream>

using namespace std; 

int main (){
    
    long long N, k; 

    cin >> N; 
    cin >> k; 

    long long a = N % k; 

    if (a == 0){

        cout << N; 

    }
    else {

        cout << N + (k - a);

    }


    return 0; 

}
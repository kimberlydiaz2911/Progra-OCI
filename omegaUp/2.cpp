#include <iostream>

using namespace std; 

int main (){

    long long n; 
    cin >> n; 

    if (n % 2 == 0 && n > 2){

        cout << "SI";

    }
    else {

        cout << "NO";

    }

    return 0; 

}
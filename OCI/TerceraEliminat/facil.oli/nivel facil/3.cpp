#include <iostream>

using namespace std; 


int main (){

    long long n, k; 

    cin >> n; 
    cin >> k; 

    long long r = (n & k); 

    long long s = (n % k); 

    cout << r; 
    cout << k; 

    return 0; 

}
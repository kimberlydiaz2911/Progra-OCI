#include <iostream>
#include <cmath>

using namespace std; 

int main (){

    int a, b; 

    cin >> a; 
    cin >> b; 

    int c = pow (a, b); 

    int d = c % 10; 
    
    cout << d; 


    return 0; 

}
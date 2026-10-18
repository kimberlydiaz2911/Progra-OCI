#include <iostream>

using namespace std; 

int main (){

    long long d, a, n; 

    cin >> d; 
    cin >> a; 
    cin >> n; 

    // al dia de hoy, o sea, a, se le suma n, y cada vez que 
    // eso llega a d - 1, se inicia desde 0. 

    
    long long h = (a + n) % (d - 1); 

    cout << h; 
    



    return 0; 

}
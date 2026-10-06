#include <iostream>

using namespace std; 

int main (){

    int numero, x; 
    cin >> numero, x ; 

    for (int i = 0; i < numero; i ++){

        cin >> numero; 

    }

    for (int i = 1; i < numero; i++){

        if (i == x){

            cout << "SI" << '\n';

        }
        else {

            cout << "NO" << '\n';

        }

    }

    return 0; 
}
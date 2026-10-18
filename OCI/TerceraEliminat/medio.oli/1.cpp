#include <iostream>
#include <string>
#include <algorithm>

using namespace std; 

int main (){

    string a, b; 

    cin >> a; 
    cin >> b; 

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if (a == b){

        cout << "SI"; 

    }
    else {

        cout << "NO"; 

    }


    return 0; 

}
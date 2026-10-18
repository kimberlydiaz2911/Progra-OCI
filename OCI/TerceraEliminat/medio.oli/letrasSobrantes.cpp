#include <iostream>
#include <string>
#include <algorithm>

using namespace std; 

int main(){

    string a, b; //minusculas

    cin >> a; 
    cin >> b; 

    int frecuencia[26] = {};

    for (char c : a){

        frecuencia[c - 'a']++; 

    }

    for (char c : b){

        frecuencia[c - 'a']--; 

    }

    int eliminaciones = 0; 

    for (int i = 0; i < 26; i ++){

        eliminaciones += abs(frecuencia[i]); 

    }

    cout << eliminaciones; 

    return 0; 

}

// aaabbs
// aaaabsb

// aaabbs
// aaaabbs
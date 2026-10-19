#include <iostream>
#include <string>
#include <algorithm>

using namespace std; 

int mian(){

    string a; 
    cin >> a; 

    int f[26] = {};

    for (char c : a){

        f[c - 'a']++; 

    }

    for (int i = 0; i < 26; i += 2){

        if (f[i] != f[i + 1]){

            cout << "NO"; 
            return 0; 

        }
    }

    cout << "SI"; 
    return 0; 

}
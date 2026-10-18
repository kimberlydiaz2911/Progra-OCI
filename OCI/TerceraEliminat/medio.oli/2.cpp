#include <iostream> 

using namespace std; 


int main(){

    string a, b; 

    cin >> a; 
    cin >> b; 

    if (a.size() != b.size()){

        cout << "NO";
        return 0; 

    }
    
    int frecuencia[26] = {}; 

    for (char c : a){

        frecuencia[c-'a'] ++; 

    }

    for (char c : b){

        frecuencia[c - 'a']--;

    }

    for (int i = 0; i < 26; i++){

        if (frecuencia[i] != 0){

            cout << "NO";
            return 0; 

        }

    }

    cout << "SI"; 
    
    return 0; 

}
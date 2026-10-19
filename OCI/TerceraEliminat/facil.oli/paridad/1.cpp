#include <iostream>

using namespace std; 

int main(){

    long long N; 
    cin >> N; 

    long long a = N % 2; 

    if (a == 0){

        cout << N / 2; 

    }
    else{

    cout << N + 3;        

    }


    return 0; 

}
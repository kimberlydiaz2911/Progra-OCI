
#include <iostream>
using namespace std;

int main() {

    long long p, q, h, t;

    cin >> p;
    cin >> q;
    cin >> h;
    cin >> t;

    long long cantidad = q - p + 1;

    long long resultado = (h - p + t) % cantidad + p;

    cout << resultado << '\n';

    return 0;
    
}
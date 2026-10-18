
#include <iostream>

using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {

        int n;
        string s;
        cin >> n >> s;

        string empiezaMinuscula = s;
        string empiezaMayuscula = s;

        int cambiosMinuscula = 0;
        int cambiosMayuscula = 0;

        for (int i = 0; i < n; i++) {

            // Opcion 1: empieza con minuscula
            if (i % 2 == 0) {

                if (islower(s[i]) == 0)
                    cambiosMinuscula++;

                empiezaMinuscula[i] = tolower(s[i]);

            } 
            else {

                if (isupper(s[i]) == 0)
                    cambiosMinuscula++;

                empiezaMinuscula[i] = toupper(s[i]);
                
            }

            // Opcion 2: empieza con mayuscula
            if (i % 2 == 0) {
                if (isupper(s[i]) == 0)
                    cambiosMayuscula++;

                empiezaMayuscula[i] = toupper(s[i]);
            } else {
                if (islower(s[i]) == 0)
                    cambiosMayuscula++;

                empiezaMayuscula[i] = tolower(s[i]);
            }
        }

        if (cambiosMinuscula <= cambiosMayuscula) {
            cout << empiezaMinuscula << '\n';
        } else {
            cout << empiezaMayuscula << '\n';
        }
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <set>
#include <string>
using namespace std;

const int CAPACIDAD = 3;

int main() {
    int m;
    cin >> m;

    vector<string> reservas;   
    set<string> reservados;

    for (int i = 0; i < m; i++) {
        string comando;
        cin >> comando;

        if (comando == "reservar") {
            string nombre;
            cin >> nombre;
            if (reservados.count(nombre)) {
                cout << nombre << " ya tiene una reserva\n";
            } else if ((int)reservas.size() >= CAPACIDAD) {
                cout << "No hay cupos para " << nombre << '\n';
            } else {
                reservas.push_back(nombre);
                reservados.insert(nombre);
                cout << nombre << " reservo un cupo\n";
            }
            } else if (comando == "cancelar") {
            string nombre;
            cin >> nombre;
            if (!reservados.count(nombre)) {
                cout << nombre << " no tenia reserva\n";
            } else {
                for (auto it = reservas.begin(); it != reservas.end(); ++it) {   
                    if (*it == nombre) {
                        reservas.erase(it);
                        break;   
                    }
                }
                reservados.erase(nombre);
                cout << nombre << " cancelo su reserva\n";
            }
        } else if (comando == "listar") {
            if (reservas.empty()) {
                cout << "Sin reservas\n";
            } else {
                for (const string& nombre : reservas) {
                    cout << nombre << '\n';
                }
            }
        }
    }
    return 0;
}
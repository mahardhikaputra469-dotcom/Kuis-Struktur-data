
#include "Stack.h"

int main() {
    Stack gudang = {NULL};
    string kode;

    for (int i = 1; i <= 5; i++) {
        cout << "Kode kotak " << i << ": ";
        cin >> kode;
        push(gudang, kode);
    }

    cout << "\nKondisi awal:\n";
    tampil(gudang);

    cout << "\nAmbil 3 kotak:\n";
    for (int i = 0; i < 3; i++)
        pop(gudang);

    cout << "\nSisa kotak:\n";
    tampil(gudang);

    cout << "\nMengosongkan gudang:\n";
    while (!kosong(gudang))
        pop(gudang);

    cout << "\nUji gudang kosong:\n";
    pop(gudang);

    return 0;
}
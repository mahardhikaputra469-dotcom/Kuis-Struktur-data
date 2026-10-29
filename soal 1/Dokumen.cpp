
#include <iostream>
#include "Dokumen.h"
using namespace std;

void Push(Dokumen &s, string perubahan) {
    if (s.top == 9) {
        cout << "Stack penuh!\n";
        return;
    }
    s.top++;
    s.data[s.top] = perubahan;
}

void Pop(Dokumen &s) {
    if (s.top == -1) {
        cout << "Riwayat kosong!\n";
        return;
    }
    cout << "Undo: " << s.data[s.top] << endl;
    s.top--;
}

void Tampil(Dokumen s) {
    if (s.top == -1) {
        cout << "Riwayat kosong!\n";
        return;
    }
    for (int i = s.top; i >= 0; i--)
        cout << s.data[i] << endl;
}

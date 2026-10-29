
#include <iostream>
#include "Dokumen.h"
using namespace std;

int main() {
    Dokumen s;
    s.top = -1;

    Push(s, "Menulis judul");
    Push(s, "Menambah paragraf");
    Push(s, "Mengubah font");
    Push(s, "Menghapus kalimat");
    Push(s, "Menambah gambar");

    cout << "Riwayat awal:\n";
    Tampil(s);

    cout << "\nUndo pertama:\n";
    Pop(s);

    cout << "\nUndo kedua:\n";
    Pop(s);

    cout << "\nRiwayat setelah undo:\n";
    Tampil(s);

    return 0;
}

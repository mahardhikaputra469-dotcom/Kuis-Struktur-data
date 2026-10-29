
#include "Stack.h"

bool kosong(Stack &s) {
    return s.top == NULL;
}

bool ada(Stack &s, string kode) {
    Node* p = s.top;
    while (p != NULL) {
        if (p->kode == kode) return true;
        p = p->next;
    }
    return false;
}

void push(Stack &s, string kode) {
    if (ada(s, kode)) {
        cout << "Kode sudah ada!\n";
        return;
    }

    Node* baru = new Node;
    baru->kode = kode;
    baru->next = s.top;
    s.top = baru;
    cout << kode << " masuk.\n";
}

void pop(Stack &s) {
    if (kosong(s)) {
        cout << "Gudang kosong!\n";
        return;
    }

    Node* p = s.top;
    cout << p->kode << " diambil.\n";
    s.top = p->next;
    delete p;
}

void tampil(Stack &s) {
    if (kosong(s)) {
        cout << "Gudang kosong!\n";
        return;
    }

    Node* p = s.top;
    cout << "Kotak dari atas: ";
    while (p != NULL) {
        cout << p->kode << " ";
        p = p->next;
    }
    cout << endl;
}

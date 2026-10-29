
#ifndef DOKUMEN_H
#define DOKUMEN_H

#include <string>
using namespace std;

struct Dokumen {
    string data[10];
    int top;
};

void Push(Dokumen &s, string perubahan);
void Pop(Dokumen &s);
void Tampil(Dokumen s);

#endif

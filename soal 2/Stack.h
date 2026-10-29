
#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <string>
using namespace std;

struct Node {
    string kode;
    Node* next;
};

struct Stack {
    Node* top;
};

bool kosong(Stack &s);
bool ada(Stack &s, string kode);
void push(Stack &s, string kode);
void pop(Stack &s);
void tampil(Stack &s);

#endif

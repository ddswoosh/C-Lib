// Standard includes
#include <iostream>

// Header includes
#include "vector.h"

template <class T>
Vector<T>::Vector() : length(0) {
    vector = (T*) malloc(sizeof(int));
}

template <class T>
Vector<T>::~Vector() {}

template <typename T>
void Vector<T>::Append(T val) {
    if (length == memSize) {
        Resize();
    }

    vector[length] = val;
    ++length;
}

template <typename T>
void Vector<T>::Resize() {
    memSize *= 2;
    realloc(vector, sizeof(int) * memSize);
}

template <typename T>
T PopLeft();
template <typename T>
T PopRight();
template <typename T>
void Sort(T*);
template <typename T>
int search(T*);

template <typename T>
int Vector<T>::Length() {
    return length;
}

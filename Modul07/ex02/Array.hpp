#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string.h>

template <typename T>
class Array {
    private:
        T *tab;
        unsigned int _size;
    public:
        Array(void);
        ~Array(void);
        Array (unsigned int n);
        Array (const Array& ob);
        Array &operator=(Array const &ob);
        T &operator[](unsigned int index);
        T const &operator[](unsigned int index) const;
        unsigned int size(void) const;
};

#include "Array.tpp"
#endif
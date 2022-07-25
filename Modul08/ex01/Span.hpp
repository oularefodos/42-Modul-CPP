#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <string>
#include <vector>

class Span
{
private:
    unsigned int size;
    std::vector<int> tab;

public:
    Span(void);
    ~Span(void);
    Span(int _size);
    Span(Span const &ob);
    Span &operator=(Span const &ob);
    void addNumber(int value);
    template <typename Iter>
    void addNumber(Iter start, Iter end)
    {
        unsigned int dist = distance(start, end);
        if (dist <= (tab.size() - size))
            tab.insert(tab.end(), start, end);
        else
            throw std::out_of_range("Impossible because Span is full");
    }
    int shortestSpan(void) const;
    int longestSpan(void) const;
};

#endif
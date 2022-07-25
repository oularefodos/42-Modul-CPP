#include "Span.hpp"

Span::Span(void)
{
    size = 0;
}

Span::Span(int _size)
{
    size = _size;
}

Span::Span(Span const & ob)
{
    this->tab = ob.tab;
    size = ob.size;
}

Span::~Span(void)
{
}

Span& Span::operator=(Span const& ob)
{
    this->tab = ob.tab;
    size = ob.size;
    return *this;
}

void Span::addNumber(int value)
{
    if (tab.size() < size)
        tab.push_back(value);
    else
        throw std::out_of_range("Impossible because Span is full");
}

int Span::longestSpan(void) const
{
    int min = *std::min_element(tab.begin(), tab.end());
    int max = *std::max_element(tab.begin(), tab.end());
    return (max - min);
}

int Span::shortestSpan(void) const
{
    std::vector <int> cp = tab;
    std::sort(cp.begin(), cp.end());
    int ret = 0;
    for (unsigned int i = 0; i < cp.size() - 1; i++)
    {
        if (i == 0)
            ret = cp[i + 1] - cp[i];
        if (cp[i + 1] - cp[i] < ret)
            ret = cp[i + 1] - cp[i];
    }
    return ret;
}
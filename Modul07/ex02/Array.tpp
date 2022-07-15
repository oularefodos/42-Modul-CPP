
template <typename T>
Array<T>::Array(void)
{
    tab = new T[0];
    _size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    tab = new T[n];
    _size = n;
    for (unsigned int i = 0; i < n; i++)
        tab[i] = 0;
}

template <typename T>
Array<T>::Array (const Array<T>& ob)
{
    _size = ob.size();
    tab = new T[_size];
    for (unsigned int i(0); i < _size; i++)
        tab[i] = ob.tab[i];
}

template <typename T>
Array<T>::~Array(void)
{
    delete[] tab;
}

template <typename T>
Array<T>& Array<T>::operator=(Array<T> const& ob)
{
    delete[] tab;
    _size = ob.size();
    tab = new T[_size];
    for (unsigned int i(0); i < _size; i++)
        tab[i] = ob.tab[i];
    return (*this);
}

template <typename T>
T const& Array<T>::operator[](unsigned int index) const
{
    if (index >= _size)
        throw std::out_of_range("Index indexvalid");
    return tab[index];
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
    if (index >= _size)
        throw std::out_of_range("Index indvalid");
    return tab[index];
}

template <typename T>
unsigned int Array<T>::size(void) const
{
    return _size;
}
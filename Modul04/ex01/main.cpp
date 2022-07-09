
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal *tab[4];
    int i;

    i = 0;
    while (i < 4)
    {
        if (i % 2)
            tab[i] = new Cat();
        else
            tab[i] = new Dog();
        i++;
    }
    i = 0;
    while (i < 4)
        tab[i++]->makeSound();
    i = 0;
    while (i < 4)
        delete tab[i++];
    return (0);
}
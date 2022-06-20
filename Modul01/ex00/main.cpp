#include "Zombie.hpp"

int main(void)
{
    Zombie *first = newZombie("first zombie");
    first->announce();
    randomChump("second zombie");
    delete first;
    return (0);
}
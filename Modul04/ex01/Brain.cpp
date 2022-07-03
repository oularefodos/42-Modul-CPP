#include "Brain.hpp"

Brain::Brain(void)
{
    for (int i(0); i < 100; i++)
        ideas[i] = "";
    std::cout << "Create Brain Object" << std::endl;
}

Brain::Brain(Brain const& ob)
{
    for (int i(0); i < 100; i++)
        ideas[i] = ob.ideas[i];
    std::cout << "Create Brain Object" << std::endl;
}

Brain& Brain::operator=(Brain const ob)
{
    for (int i(0); i < 100; i++)
        ideas[i] = ob.ideas[i];
    return *this;
}

std::string* Brain::getIdeas(void)
{
    return this->ideas;
}

void Brain::setIdeas(std::string str)
{
    int i(0);
    for (i = 0; (i < 100 && ideas[i] != ""); i++);
    this->ideas[i] = str;
}

Brain::~Brain(void)
{
    std::cout << "Destruction de l'objet Brain" << std::endl;
}
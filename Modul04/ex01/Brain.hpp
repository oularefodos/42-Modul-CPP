#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
#include <string>


class Brain {
    protected:
         std::string ideas[100];
    public:
        Brain(void);
        Brain(Brain const& ob);
        Brain& operator=(Brain const ob);
        std::string* getIdeas(void);
        void setIdeas(std::string str);
        ~Brain(void);
};

#endif
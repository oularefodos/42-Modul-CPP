
#include <iostream>
#include <string.h>
#include <time.h>

class Base {
    public:
        virtual ~Base() {};
};

class  A : public Base {};
class  B : public Base {};
class  C : public Base {};

Base *generate(void)
{
    int random;
    Base *ob;
    srand(time(0));

    random = rand() % 3;

    switch (random)
    {
        case 0:
            ob = new A;
            break;
        case 1:
            ob = new B;
            break;
        case 2:
            ob = new C;
            break;
    }
    return (ob);
}

void msg(std::string m)
{
    std::cout << m << std:: endl;
}

void identify(Base* p)
{
    A* a;
    B* b;
    C* c;

    a = dynamic_cast<A*>(p);
    b = dynamic_cast<B*>(p);
    c = dynamic_cast<C*>(p);

    a ? (msg("This Type is A")) : (b ? msg("This type is B") 
    : (c ? msg("This Type is C") : msg("This Type does not exist")));
}

void identify(Base& p)
{
    try
    {
       (void) dynamic_cast<A&>(p);
        msg("This Type is A");
    }
    catch(const std::exception& e){}
    try
    {
       (void) dynamic_cast<B&>(p);
        msg("This Type is B");
    }
    catch(const std::exception& e){}
    try
    {
       (void) dynamic_cast<C&>(p);
        msg("This Type is C");
    }
    catch(const std::exception& e){}
}

int main(void)
{
    Base *n;
    n = generate();
    identify(n);
    identify(*n);

    delete n;
    return (0);
}

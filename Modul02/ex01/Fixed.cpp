
#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void)
{
    nb = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Fixed& Fixed::operator=(const Fixed &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    nb = obj.getRawBits();

    return *this;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return nb;
}

void Fixed::setRawBits(int const raw)
{
    nb = raw;
}

Fixed::Fixed(const int _nb)
{
    nb = _nb << nb_bits;
}

Fixed::Fixed(const float _nb)
{
    nb = roundf(_nb * (1 << nb_bits));
}

float Fixed::toFloat(void) const
{
    return (nb / (float)(1 << nb_bits));
}

int Fixed::toInt(void) const
{
    return (nb >> nb_bits);
}

std::ostream& operator<<(std::ostream &out, const Fixed &obj)
{
   out << obj.toFloat();
   return out;
}
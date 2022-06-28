
#include "Fixed.hpp"
#include <cmath>


// CONSTRUCTOR

Fixed::Fixed(void)
{
    nb = 0;
}

Fixed::Fixed(const Fixed &obj)
{
    *this = obj;
}

Fixed& Fixed::operator=(const Fixed &obj)
{
    nb = obj.getRawBits();

    return *this;
}

Fixed::~Fixed(void)
{
}


Fixed::Fixed(const int _nb)
{
    nb = _nb << nb_bits;
}

Fixed::Fixed(const float _nb)
{
    nb = roundf(_nb * (1 << nb_bits));
}

// MEMBERS FUNCTIONS

int Fixed::getRawBits(void) const
{
    return nb;
}

void Fixed::setRawBits(int const raw)
{
    nb = raw;
}

Fixed Fixed::min(Fixed& a, Fixed& b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    else
        return (b);
}

Fixed Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    else
        return (b);
}

Fixed Fixed::max(Fixed& a, Fixed& b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    else
        return (b);
}

Fixed Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    else
        return (b);
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


// OPERATEUR DE COMPARAISON

bool Fixed::operator > (Fixed const &obj)
{
    return (nb > obj.getRawBits());
}

bool Fixed::operator == (Fixed const &obj)
{
    return (nb == obj.getRawBits());
}

bool Fixed::operator < (Fixed const &obj)
{
    return (nb < obj.getRawBits());
}

bool Fixed::operator >= (Fixed const &obj)
{
    return (nb >= obj.getRawBits());
}

bool Fixed::operator <= (Fixed const &obj)
{
    return (nb <= obj.getRawBits());
}

bool Fixed::operator != (Fixed const &obj)
{
    return (nb != obj.getRawBits());
}

// OPERATEUR ARTHMETIQUE

Fixed Fixed::operator+(Fixed const &obj)
{
    Fixed result(this->toFloat() + obj.toFloat());
    return (result);
}

Fixed Fixed::operator-(Fixed const &obj)
{
    Fixed result(this->toFloat() - obj.toFloat());
    return (result);
}

Fixed Fixed::operator*(Fixed const &obj)
{
    Fixed result(this->toFloat() * obj.toFloat());
    return (result);
}

Fixed Fixed::operator/(Fixed const &obj)
{
    Fixed result(this->toFloat() / obj.toFloat());
    return (result);
}

// OPERATEUR D'INCREMENTATION

float Fixed::operator++(void)
{
    return ++nb / float(1 << nb_bits) ;
}

float Fixed::operator--(void)
{
    return --nb / float(1 << nb_bits) ;
}

float Fixed::operator++(int)
{
    return nb++ / float(1 << nb_bits) ;
}

float Fixed::operator--(int)
{
    return nb-- / float(1 << nb_bits) ;
}


#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
    private:
        int nb;
        static const int nb_bits = 8;
    public:
        Fixed (void);
        Fixed (const Fixed &obj);
        Fixed (const int _nb);
        Fixed (const float _nb);
        Fixed& operator=(const Fixed &obj);
        ~Fixed (void);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt(void) const;
};
std::ostream& operator<<(std::ostream &out, const Fixed &obj);

#endif
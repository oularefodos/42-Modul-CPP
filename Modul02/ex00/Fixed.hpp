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
        Fixed& operator=(const Fixed &obj);
        ~Fixed (void);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif
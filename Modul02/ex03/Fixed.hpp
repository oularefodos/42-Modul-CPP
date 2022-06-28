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
        bool operator > (Fixed const &obj);
        bool operator >= (Fixed const &obj);
        bool operator <= (Fixed const &obj);
        bool operator == (Fixed const &obj);
        bool operator < (Fixed const &obj);
        bool operator != (Fixed const &obj);
        Fixed operator + (Fixed const &obj);
        Fixed operator - (Fixed const &obj);
        Fixed operator * (Fixed const &obj);
        Fixed operator / (Fixed const &obj);
        Fixed operator++(void);
        Fixed operator++(int);
        Fixed operator--(void);
        Fixed operator--(int);
        static Fixed min(Fixed& a, Fixed& b);
        static Fixed min(const Fixed& a, const Fixed& b);
        static Fixed max(Fixed& a, Fixed& b);
        static Fixed max(const Fixed& a, const Fixed& b);

};
std::ostream& operator<<(std::ostream &out, const Fixed &obj);

#endif
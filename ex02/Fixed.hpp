#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <math.h>
class Fixed
{
    private:
        int fixed_point;
        static const int s = 8;
    public:
        Fixed();
        Fixed(const Fixed &other);
        Fixed(const int value);
        Fixed(const float value);
        ~Fixed();
        int toInt() const;
        Fixed &operator=(const Fixed &other);
        bool operator<(const Fixed &other) const;
        bool operator>(const Fixed &other) const;
        bool operator<=(const Fixed &other) const;
        bool operator>=(const Fixed &other) const;
        bool operator==(const Fixed &other) const;
        bool operator!=(const Fixed &other) const;
        Fixed operator+(const Fixed &other) const;
        Fixed operator-(const Fixed &other) const;
        Fixed operator*(const Fixed &other) const;
        Fixed operator/(const Fixed &other) const;
        Fixed &operator++();       // Prefix increment
        Fixed operator++(int);    // Postfix increment
        Fixed &operator--();       // Prefix decrement
        Fixed operator--(int);    // Postfix decrement
        static Fixed &min(Fixed &a, Fixed &b);
        static const Fixed &min(const Fixed &a, const Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);
        float toFloat() const;
        int getRawBits() const;
        void setRawBits(int const raw);
};
std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
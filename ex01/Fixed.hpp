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
        float toFloat() const;
        int getRawBits() const;
        void setRawBits(int const raw);
};
std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
#ifndef FIXED_H
#define FIXED_H

#include <iostream>
class Fixed
{
    private:
        int fixed_point;
        static const int s;
    public:
        Fixed();
        Fixed(const Fixed &other);
        ~Fixed();
        Fixed &operator=(const Fixed &other);
        int getRawBits() const;
        void setRawBits(int const raw);
};

#endif
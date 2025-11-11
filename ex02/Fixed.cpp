#include "Fixed.hpp"

Fixed::Fixed() : fixed_point(0)
{
    // std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &other)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = other; // ← هادي كتستدعي operator= ديالك
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}
int Fixed::getRawBits() const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return this->fixed_point;
}
void Fixed::setRawBits(int const raw)
{
    this->fixed_point = raw;
}
Fixed &Fixed::operator=(const Fixed &other)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->fixed_point = other.fixed_point;
    }
    return *this;
}

Fixed::Fixed(const int value)
{
    // std::cout << "Int constructor called" << std::endl;
    this->fixed_point = value << s;
}
Fixed::Fixed(const float value)
{
    // std::cout << "Float constructor called" << std::endl;
    this->fixed_point = static_cast<int>(roundf(value * (1 << s)));
}
float Fixed::toFloat() const
{
    return static_cast<float>(this->fixed_point) / (1 << s);
}
int Fixed::toInt() const
{
    return this->fixed_point >> s;
}
std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}
bool Fixed::operator<(const Fixed &other) const
{
    return this->fixed_point < other.fixed_point;
}
bool Fixed::operator>(const Fixed &other) const
{
    return this->fixed_point > other.fixed_point;
}
bool Fixed::operator<=(const Fixed &other) const
{
    return this->fixed_point <= other.fixed_point;
}
bool Fixed::operator>=(const Fixed &other) const
{
    return this->fixed_point >= other.fixed_point;
}
bool Fixed::operator==(const Fixed &other) const
{
    return this->fixed_point == other.fixed_point;
}
bool Fixed::operator!=(const Fixed &other) const
{
    return this->fixed_point != other.fixed_point;
}
Fixed Fixed::operator+(const Fixed &other) const
{
    Fixed result;
    result.setRawBits(this->getRawBits() + other.getRawBits());
    return result;
}
Fixed Fixed::operator-(const Fixed &other) const
{
    Fixed result;
    result.setRawBits(this->getRawBits() - other.getRawBits());
    return result;
}
Fixed Fixed::operator*(const Fixed &other) const
{
    Fixed result;
    result.setRawBits((this->getRawBits() * other.getRawBits()) >> s);
    return result;
}
Fixed Fixed::operator/(const Fixed &other) const
{
    Fixed result;
    result.setRawBits((this->getRawBits() / other.getRawBits()) << s);
    return result;
}
Fixed &Fixed::operator++() // Prefix increment
{
    this->fixed_point++;
    return *this;
}
Fixed Fixed::operator++(int) // Postfix increment
{
    Fixed temp = *this;
    this->fixed_point++;
    return temp;
}
Fixed &Fixed::operator--() // Prefix decrement
{
    this->fixed_point--;
    return *this;
}
Fixed Fixed::operator--(int) // Postfix decrement
{
    Fixed temp = *this;
    this->fixed_point--;
    return temp;
}
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b) ? a : b;
}
const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b) ? a : b;
}
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b) ? a : b;
}
const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b) ? a : b;
}
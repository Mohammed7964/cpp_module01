// Removed missing include "Orthodox.hpp" to avoid compile error
#include "Fixed.hpp"

Fixed::Fixed() : fixed_point(0)
{
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other; // ← هادي كتستدعي operator= ديالك
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixed_point;
}
void Fixed::setRawBits(int const raw)
{
    this->fixed_point = raw;
}
Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->fixed_point = other.fixed_point;
    }
    return *this;
}

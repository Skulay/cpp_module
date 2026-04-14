/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <alehamad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 00:53:38 by alehamad          #+#    #+#             */
/*   Updated: 2026/04/12 00:53:38 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//          constructor/destructor
Fixed::Fixed() : value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) {
    std::cout << "Int constructor called" << std::endl;
    this->value = value << fractionalBits;
}

Fixed::Fixed(const float value) {
    std::cout << "Float constructor called" << std::endl;
    this->value = roundf(value * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

//          operator << =
Fixed& Fixed::operator=(const Fixed& other) {
    if (this != &other) this->value = other.value;
    return (*this);
}
std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    return os << fixed.toFloat();
}

//          getters
int Fixed::getRawBits(void) const { return (value); }

void Fixed::setRawBits(int raw) { value = raw; }

float Fixed::toFloat(void) const { return ((float)value / (1 << fractionalBits)); }

int Fixed::toInt(void) const { return (value >> fractionalBits); }


//          comparison operators
bool Fixed::operator>(const Fixed& other) const {
    return (this->value > other.value);
}

bool Fixed::operator<(const Fixed& other) const {
    return (this->value < other.value);
}

bool Fixed::operator>=(const Fixed& other) const {
    return (this->value >= other.value);
}

bool Fixed::operator<=(const Fixed& other) const {
    return (this->value <= other.value);
}

bool Fixed::operator==(const Fixed& other) const {
    return (this->value == other.value);
}

bool Fixed::operator!=(const Fixed& other) const {
    return (this->value != other.value);
}

//          arithmetic operators
Fixed Fixed::operator+(const Fixed& other) const {
    return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed& other) const {
    return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed& other) const {
    return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed& other) const {
    if (other.getRawBits() == 0) {
        throw std::invalid_argument("Div by zero");
    }
    return (Fixed(this->toFloat() / other.toFloat()));
}

//          increment/decrement
Fixed& Fixed::operator++() {
    value += 1;
    return (*this);
}

Fixed Fixed::operator++(int) {
    Fixed temp = *this;
    ++(*this);
    return (temp);
}

Fixed& Fixed::operator--() {
    value -= 1;
    return (*this);
}

Fixed Fixed::operator--(int) {
    Fixed temp = *this;
    --(*this);
    return (temp);
}

//          min/max
Fixed& Fixed::min(Fixed& a, Fixed& b) {
    if (a < b)
        return (a);
    else
        return (b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    if (a < b)
        return (a);
    else
        return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
    if (a > b)
        return (a);
    else
        return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    if (a > b)
        return (a);
    else
        return (b);
}
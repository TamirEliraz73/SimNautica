//
// Created by Tamir Eliraz on 11/2/2024.
//

#include "Vector2f.h"

Geography::Vector2f::Vector2f() : Vector2f(0.0F) { }

Geography::Vector2f::Vector2f(float xy) : Vector2f(xy, xy) { }

Geography::Vector2f::Vector2f(float x, float y) : x(x), y(y) { }

Geography::Vector2f &Geography::Vector2f::operator+=(const Geography::Vector2f &other) {
    x += other.x;
    y += other.y;
    return *this;
}

Geography::Vector2f &Geography::Vector2f::operator-=(const Geography::Vector2f &other) {
    x -= other.x;
    y -= other.y;
    return *this;
}

Geography::Vector2f &Geography::Vector2f::operator*=(float c) {
    x *= c;
    y *= c;
    return *this;
}

Geography::Vector2f Geography::operator+(const Geography::Vector2f &lhs, const Geography::Vector2f &rhs) {
    return Vector2f(lhs.x + rhs.x, lhs.y + rhs.y);
}

Geography::Vector2f Geography::operator-(const Geography::Vector2f &lhs, const Geography::Vector2f &rhs) {
    return Vector2f(lhs.x - rhs.x, lhs.y - rhs.y);
}

Geography::Vector2f Geography::operator*(const Geography::Vector2f &lhs, float c) {
    return Vector2f(lhs.x - c, lhs.y - c);
}

std::ostream &Geography::operator<<(std::ostream &out, const Geography::Vector2f &rhs) {
    out << "(" << rhs.x << ", " << rhs.y << ")";
    return out;
}

float Geography::Vector2f::getX() const {
    return x;
}

Geography::Vector2f &Geography::Vector2f::setX(float newX) {
    this->x = newX;
    return *this;
}

float Geography::Vector2f::getY() const {
    return y;
}

Geography::Vector2f &Geography::Vector2f::setY(float newY) {
    this->y = newY;
    return *this;
}

Geography::Vector2f &Geography::Vector2f::setXY(float newX, float newY) {
    return setX(newX).setY(newY);
}

[[maybe_unused]] Geography::Vector2f &Geography::Vector2f::setXY(float newXY) {
    return setXY(newXY, newXY);
}

#include "Vec2.h"
#include <cmath>

Vec2 Vec2::operator-() const {
    Vec2 outVec;
    outVec.x = -(this->x);
    outVec.y = -(this->y);
    return outVec;
}

Vec2 Vec2::operator+(Vec2 const& other) const {
    Vec2 outVec;
    outVec.x = this->x + other.x;
    outVec.y = this->y + other.y;
    return outVec;
}

Vec2 Vec2::operator+(const float scalar) const {
    Vec2 outVec;
    outVec.x = this->x + scalar;
    outVec.y = this->y + scalar;
    return outVec;
}

Vec2 Vec2::operator-(Vec2 const& other) const {
    Vec2 outVec;
    outVec.x = this->x - other.x;
    outVec.y = this->y - other.y;
    return outVec;
}

Vec2 Vec2::operator-(const float scalar) const {
    return *this + (-scalar);
}

Vec2 Vec2::operator*(Vec2 const& other) const {
    Vec2 outVec;
    outVec.x = this->x * other.x;
    outVec.y = this->y * other.y;
    return outVec;
}

Vec2 Vec2::operator*(const float scalar) const {
    Vec2 outVec;
    outVec.x = this->x * scalar;
    outVec.y = this->y * scalar;
    return outVec;
}

Vec2 Vec2::operator/(Vec2 const& other) const {
    Vec2 outVec;
    outVec.x = this->x / other.x;
    outVec.y = this->y / other.y;
    return outVec;
}

Vec2 Vec2::operator/(const float scalar) const {
    Vec2 outVec;
    outVec.x = this->x / scalar;
    outVec.y = this->y / scalar;
    return outVec;
}

float Vec2::Dot(Vec2 const& other) const {
    const float x_part = this->x * other.x;
    const float y_part = this->y * other.y;
    return x_part + y_part;
}

float Vec2::Length() const {
    return std::sqrt((this->x * this->x) + (this->y * this->y));
}

Vec2 Vec2::Normalize() const {
    return *this / this->Length();
}

float Vec2::Length(Vec2 const& vec) {
    return vec.Length();
}

float Vec2::Dot(Vec2 const& vec_a, Vec2 const& vec_b) {
    return vec_a.Dot(vec_b);
}

Vec2 Vec2::Normalize(Vec2 const& vec) {
    return vec.Normalize();
}

#include "Vec3.h"
#include <cmath>

Vec3 Vec3::operator-() const {
    Vec3 outVec;
    outVec.x = -(this->x);
    outVec.y = -(this->y);
    outVec.z = -(this->z);
    return outVec;
}

Vec3 Vec3::operator+(Vec3 const& other) const {
    Vec3 outVec;
    outVec.x = this->x + other.x;
    outVec.y = this->y + other.y;
    outVec.z = this->z + other.z;
    return outVec;
}

Vec3 Vec3::operator+(const float scalar) const {
    Vec3 outVec;
    outVec.x = this->x + scalar;
    outVec.y = this->y + scalar;
    outVec.z = this->z + scalar;
    return outVec;
}

Vec3 Vec3::operator-(Vec3 const& other) const {
    Vec3 outVec;
    outVec.x = this->x - other.x;
    outVec.y = this->y - other.y;
    outVec.z = this->z - other.z;
    return outVec;
}

Vec3 Vec3::operator-(const float scalar) const {
    return *this + (-scalar);
}

Vec3 Vec3::operator*(Vec3 const& other) const {
    Vec3 outVec;
    outVec.x = this->x * other.x;
    outVec.y = this->y * other.y;
    outVec.z = this->z * other.z;
    return outVec;
}

Vec3 Vec3::operator*(const float scalar) const {
    Vec3 outVec;
    outVec.x = this->x * scalar;
    outVec.y = this->y * scalar;
    outVec.z = this->z * scalar;
    return outVec;
}

Vec3 Vec3::operator/(Vec3 const& other) const {
    Vec3 outVec;
    outVec.x = this->x / other.x;
    outVec.y = this->y / other.y;
    outVec.z = this->z / other.z;
    return outVec;
}

Vec3 Vec3::operator/(const float scalar) const {
    Vec3 outVec;
    outVec.x = this->x / scalar;
    outVec.y = this->y / scalar;
    outVec.z = this->z / scalar;
    return outVec;
}

// https://www.mathsisfun.com/algebra/vectors-dot-product.html
float Vec3::Dot(Vec3 const& other) const {
    const float x_part = this->x * other.x;
    const float y_part = this->y * other.y;
    const float z_part = this->z * other.z;
    return x_part + y_part + z_part;
}

// https://www.mathsisfun.com/algebra/vectors-cross-product.html
Vec3 Vec3::Cross(Vec3 const& other) const {
    Vec3 outVec;
    outVec.x = (this->y * other.z) - (this->z * other.y);
    outVec.y = (this->z * other.x) - (this->x * other.z);
    outVec.z = (this->x * other.y) - (this->y * other.x);
    return outVec;
}

// https://www.khanacademy.org/computing/computer-programming/programming-natural-simulations/programming-vectors/a/vector-magnitude-normalization
float Vec3::Length() const {
    return std::sqrt(
        (this->x * this->x) +
        (this->y * this->y) +
        (this->z * this->z)
    );
}

// https://www.khanacademy.org/computing/computer-programming/programming-natural-simulations/programming-vectors/a/vector-magnitude-normalization
Vec3 Vec3::Normalize() const {
    return *this / this->Length();
}

Vec3 Vec3::Normalize(Vec3 const& vec) {
    return vec.Normalize();
}

float Vec3::Length(Vec3 const& vec) {
    return vec.Length();
}

float Vec3::Dot(Vec3 const& vec_a, Vec3 const& vec_b) {
    return vec_a.Dot(vec_b);
}

Vec3 Vec3::Cross(Vec3 const& vec_a, Vec3 const& vec_b) {
    return vec_a.Cross(vec_b);
}

#pragma once
#include "Vec2.h"

class Vec3 {
public:
    float x;
    float y;
    float z;

    Vec3() :
        x(0.f),
        y(0.f),
        z(0.f) {}

    explicit Vec3(const float v) :
        x(v),
        y(v),
        z(v) {}

    Vec3(const float _x, const float _y, const float _z) :
        x(_x),
        y(_y),
        z(_z) {}

    Vec3(const Vec2& _vec2, const float _z) :
        x(_vec2.x),
        y(_vec2.y),
        z(_z) {}

    Vec3 operator-() const;
    Vec3 operator+(Vec3 const& other) const;
    Vec3 operator+(float scalar) const;
    Vec3 operator-(Vec3 const& other) const;
    Vec3 operator-(float scalar) const;
    Vec3 operator*(Vec3 const& other) const;
    Vec3 operator*(float scalar) const;
    Vec3 operator/(Vec3 const& other) const;
    Vec3 operator/(float scalar) const;

    float Dot(Vec3 const& other) const;
    Vec3 Cross(Vec3 const& other) const;
    float Length() const;
    Vec3 Normalize() const;

    static float Length(Vec3 const& vec);
    static float Dot(Vec3 const& vec_a, Vec3 const& vec_b);
    static Vec3 Cross(Vec3 const& vec_a, Vec3 const& vec_b);
    static Vec3 Normalize(Vec3 const& vec);
};

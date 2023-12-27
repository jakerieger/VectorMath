#pragma once

class Vec2 {
public:
    float x;
    float y;

    Vec2() :
        x(0.f),
        y(0.f) {}

    explicit Vec2(const float v) :
        x(v),
        y(v) {}

    Vec2(const float _x, const float _y) :
        x(_x),
        y(_y) {}

    Vec2 operator-() const;
    Vec2 operator+(Vec2 const& other) const;
    Vec2 operator+(float scalar) const;
    Vec2 operator-(Vec2 const& other) const;
    Vec2 operator-(float scalar) const;
    Vec2 operator*(Vec2 const& other) const;
    Vec2 operator*(float scalar) const;
    Vec2 operator/(Vec2 const& other) const;
    Vec2 operator/(float scalar) const;

    float Dot(Vec2 const& other) const;
    float Length() const;
    Vec2 Normalize() const;

    static float Length(Vec2 const& vec);
    static float Dot(Vec2 const& vec_a, Vec2 const& vec_b);
    static Vec2 Normalize(Vec2 const& vec);
};

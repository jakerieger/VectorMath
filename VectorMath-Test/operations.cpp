#include "gtest/gtest.h"
#include <VectorMath.h>

namespace Vector2 {
    TEST(Operations, Vec2_Addition) {
        const Vec2 vec1(2.f, 3.f);
        const Vec2 vec2(4.f, 5.f);
        const Vec2 expected(6.f, 8.f);
        const Vec2 result = vec1 + vec2;

        ASSERT_FLOAT_EQ(result.x, expected.x);
        ASSERT_FLOAT_EQ(result.y, expected.y);
    }

    TEST(Operations, Vec2_ScalarAddition) {
        const Vec2 vec1(2.f, 3.f);
        constexpr float scalar = 4.f;
        const Vec2 expected(6.f, 7.f);
        const Vec2 result = vec1 + scalar;

        ASSERT_FLOAT_EQ(result.x, expected.x);
        ASSERT_FLOAT_EQ(result.y, expected.y);
    }

    TEST(Operations, Vec2_Subtraction) {
        const Vec2 vec1(2.f, 3.f);
        const Vec2 vec2(4.f, 5.f);
        const Vec2 expected(-2.f, -2.f);
        const Vec2 result = vec1 - vec2;

        ASSERT_FLOAT_EQ(result.x, expected.x);
        ASSERT_FLOAT_EQ(result.y, expected.y);
    }

    TEST(Operations, Vec2_ScalarSubtraction) {
        const Vec2 vec1(2.f, 3.f);
        constexpr float scalar = 4.f;
        const Vec2 expected(-2.f, -1.f);
        const Vec2 result = vec1 - scalar;

        ASSERT_FLOAT_EQ(result.x, expected.x);
        ASSERT_FLOAT_EQ(result.y, expected.y);
    }

    TEST(Operations, Vec2_AdditionInverse) {
        const Vec2 vec1(2.f, 3.f);
        const Vec2 vec2 = -vec1;
        const Vec2 expected(0.f, 0.f);
        const Vec2 result = vec1 + vec2;

        ASSERT_FLOAT_EQ(result.x, expected.x);
        ASSERT_FLOAT_EQ(result.y, expected.y);
    }

    TEST(Operations, Vec2_Multiply) {
        const Vec2 vec1(2.f, 3.f);
        const Vec2 vec2(4.f, 5.f);
        const Vec2 expected(8.f, 15.f);
        const Vec2 result = vec1 * vec2;

        ASSERT_FLOAT_EQ(result.x, expected.x);
        ASSERT_FLOAT_EQ(result.y, expected.y);
    }

    TEST(Operations, Vec2_ScalarMultiply) {
        const Vec2 vec1(2.f, 3.f);
        constexpr float scalar = 4.f;
        const Vec2 expected(8.f, 12.f);
        const Vec2 result = vec1 * scalar;

        ASSERT_FLOAT_EQ(result.x, expected.x);
        ASSERT_FLOAT_EQ(result.y, expected.y);
    }

    TEST(Operations, Vec2_Divide) {
        const Vec2 vec1(4.f, 6.f);
        const Vec2 vec2(2.f, 3.f);
        const Vec2 expected(2.f, 2.f);
        const Vec2 result = vec1 / vec2;

        ASSERT_FLOAT_EQ(result.x, expected.x);
        ASSERT_FLOAT_EQ(result.y, expected.y);
    }

    TEST(Operations, Vec2_ScalarDivide) {
        const Vec2 vec1(8.f, 4.f);
        constexpr float scalar = 4.f;
        const Vec2 expected(2.f, 1.f);
        const Vec2 result = vec1 / scalar;

        ASSERT_FLOAT_EQ(result.x, expected.x);
        ASSERT_FLOAT_EQ(result.y, expected.y);
    }

    TEST(Operations, Vec2_DotProduct) {
        const Vec2 vec1(-6.f, 8.f);
        const Vec2 vec2(5.f, 12.f);
        constexpr float expected = 66;
        const float result = vec1.Dot(vec2);

        ASSERT_FLOAT_EQ(result, expected);
    }

    TEST(Operations, Vec2_DotProductStatic) {
        const Vec2 vec1(-6.f, 8.f);
        const Vec2 vec2(5.f, 12.f);
        constexpr float expected = 66;
        const float result = Vec2::Dot(vec1, vec2);

        ASSERT_FLOAT_EQ(result, expected);
    }

    TEST(Operations, Vec2_Magnitude) {
        const Vec2 vec1(3.f, 4.f);
        constexpr float expected = 5.f;
        const float result = vec1.Length();

        ASSERT_NEAR(result, expected, 0.01f);
    }

    TEST(Operations, Vec2_MagnitudeStatic) {
        const Vec2 vec1(3.f, 4.f);
        constexpr float expected = 5.f;
        const float result = Vec2::Length(vec1);

        ASSERT_NEAR(result, expected, 0.01f);
    }

    TEST(Operations, Vec2_Normalize) {
        const Vec2 vec1(3.f, 4.f);
        constexpr float expected = 1.f;
        const float result = vec1.Normalize().Length();

        ASSERT_NEAR(result, expected, 0.01f);
    }

    TEST(Operations, Vec2_NormalizeStatic) {
        const Vec2 vec1(3.f, 4.f);
        constexpr float expected = 1.f;
        const float result = Vec2::Normalize(vec1).Length();

        ASSERT_NEAR(result, expected, 0.01f);
    }
}

namespace Vector3 {
    TEST(Operations, Vec3_Addition) {
        const Vec3 vec1(3.f, 4.f, 5.f);
        const Vec3 vec2(3.f, 4.f, 5.f);
        const Vec3 expected(6.f, 8.f, 10.f);
        const Vec3 result = vec1 + vec2;

        ASSERT_FLOAT_EQ(result.x, expected.x);
        ASSERT_FLOAT_EQ(result.y, expected.y);
        ASSERT_FLOAT_EQ(result.z, expected.z);
    }

    TEST(Operations, Vec3_ScalarAddition) {
        const Vec3 vec1(3.f, 4.f, 5.f);
        constexpr float scalar = 2.f;
        const Vec3 expected(5.f, 6.f, 7.f);
        const Vec3 result = vec1 + scalar;

        ASSERT_FLOAT_EQ(result.x, expected.x);
        ASSERT_FLOAT_EQ(result.y, expected.y);
        ASSERT_FLOAT_EQ(result.z, expected.z);
    }

    TEST(Operations, Vec3_Subtraction) {
        const Vec3 vec1(3.f, 4.f, 5.f);
        const Vec3 vec2(3.f, 4.f, 5.f);
        const Vec3 expected(0.f);
        const Vec3 result = vec1 - vec2;

        ASSERT_FLOAT_EQ(result.x, expected.x);
        ASSERT_FLOAT_EQ(result.y, expected.y);
        ASSERT_FLOAT_EQ(result.z, expected.z);
    }

    TEST(Operations, Vec3_ScalarSubtraction) {
        const Vec3 vec1(3.f, 4.f, 5.f);
        constexpr float scalar = 1.f;
        const Vec3 expected(2.f, 3.f, 4.f);
        const Vec3 result = vec1 - scalar;

        ASSERT_FLOAT_EQ(result.x, expected.x);
        ASSERT_FLOAT_EQ(result.y, expected.y);
        ASSERT_FLOAT_EQ(result.z, expected.z);
    }

    TEST(Operations, Vec3_AdditionInverse) {
        const Vec3 vec1(3.f, 4.f, 5.f);
        const Vec3 vec2 = -vec1;
        const Vec3 expected(0.f);
        const Vec3 result = vec1 + vec2;

        ASSERT_FLOAT_EQ(result.x, expected.x);
        ASSERT_FLOAT_EQ(result.y, expected.y);
        ASSERT_FLOAT_EQ(result.z, expected.z);
    }

    TEST(Operations, Vec3_Multiply) {
        const Vec3 vec1(3.f, 4.f, 5.f);
        const Vec3 vec2(3.f, 4.f, 5.f);
        const Vec3 expected(9.f, 16.f, 25.f);
        const Vec3 result = vec1 * vec2;

        ASSERT_FLOAT_EQ(result.x, expected.x);
        ASSERT_FLOAT_EQ(result.y, expected.y);
        ASSERT_FLOAT_EQ(result.z, expected.z);
    }

    TEST(Operations, Vec3_ScalarMultiply) {
        const Vec3 vec1(3.f, 4.f, 5.f);
        constexpr float scalar = 2.f;
        const Vec3 expected(6.f, 8.f, 10.f);
        const Vec3 result = vec1 * scalar;

        ASSERT_FLOAT_EQ(result.x, expected.x);
        ASSERT_FLOAT_EQ(result.y, expected.y);
        ASSERT_FLOAT_EQ(result.z, expected.z);
    }

    TEST(Operations, Vec3_Divide) {
        const Vec3 vec1(3.f, 4.f, 5.f);
        const Vec3 vec2(3.f, 4.f, 5.f);
        const Vec3 expected(1.f);
        const Vec3 result = vec1 / vec2;

        ASSERT_FLOAT_EQ(result.x, expected.x);
        ASSERT_FLOAT_EQ(result.y, expected.y);
        ASSERT_FLOAT_EQ(result.z, expected.z);
    }

    TEST(Operations, Vec3_ScalarDivide) {
        const Vec3 vec1(3.f, 4.f, 5.f);
        constexpr float scalar = 0.5f;
        const Vec3 expected(6.f, 8.f, 10.f);
        const Vec3 result = vec1 / scalar;

        ASSERT_FLOAT_EQ(result.x, expected.x);
        ASSERT_FLOAT_EQ(result.y, expected.y);
        ASSERT_FLOAT_EQ(result.z, expected.z);
    }

    TEST(Operations, Vec3_DotProduct) {
        const Vec3 vec1(3.f, 4.f, 5.f);
        const Vec3 vec2(3.f, 4.f, 5.f);
        constexpr float expected = 50;
        const float result = vec1.Dot(vec2);

        ASSERT_FLOAT_EQ(result, expected);
    }

    TEST(Operations, Vec3_DotProductStatic) {
        const Vec3 vec1(3.f, 4.f, 5.f);
        const Vec3 vec2(3.f, 4.f, 5.f);
        constexpr float expected = 50;
        const float result = Vec3::Dot(vec1, vec2);

        ASSERT_FLOAT_EQ(result, expected);
    }

    TEST(Operations, Vec3_Magnitude) {
        const Vec3 vec1(3.f, 4.f, 5.f);
        constexpr float expected = 7.071f;
        const float result = vec1.Length();

        ASSERT_NEAR(result, expected, 0.01f);
    }

    TEST(Operations, Vec3_MagnitudeStatic) {
        const Vec3 vec1(3.f, 4.f, 5.f);
        constexpr float expected = 7.071f;
        const float result = Vec3::Length(vec1);

        ASSERT_NEAR(result, expected, 0.01f);
    }

    TEST(Operations, Vec3_Normalize) {
        const Vec3 vec1(3.f, 4.f, 5.f);
        constexpr float expected = 1.f;
        const float result = vec1.Normalize().Length();

        ASSERT_NEAR(result, expected, 0.01f);
    }

    TEST(Operations, Vec3_NormalizeStatic) {
        const Vec3 vec1(3.f, 4.f, 5.f);
        constexpr float expected = 1.f;
        const float result = Vec3::Normalize(vec1).Length();

        ASSERT_NEAR(result, expected, 0.01f);
    }

    TEST(Operations, Vec3_Cross) {
        const Vec3 vec1(3.f, 4.f, 5.f);
        const Vec3 vec2(3.f, 4.f, 5.f);
        const Vec3 expected(0.f);
        const Vec3 result = vec1.Cross(vec2);

        ASSERT_FLOAT_EQ(result.x, expected.x);
        ASSERT_FLOAT_EQ(result.y, expected.y);
        ASSERT_FLOAT_EQ(result.z, expected.z);
    }

    TEST(Operations, Vec3_CrossStatic) {
        const Vec3 vec1(3.f, 4.f, 5.f);
        const Vec3 vec2(3.f, 4.f, 5.f);
        const Vec3 expected(0.f);
        const Vec3 result = Vec3::Cross(vec1, vec2);

        ASSERT_FLOAT_EQ(result.x, expected.x);
        ASSERT_FLOAT_EQ(result.y, expected.y);
        ASSERT_FLOAT_EQ(result.z, expected.z);
    }
}

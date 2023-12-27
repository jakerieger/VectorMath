# VectorMath

Extremely bare-bones C++ vector math library for working with 2D and 3D vectors. Should work with C++11 and above. I plan on building this out to be a more complete linear algebra library, but for now it has just enough functionality to serve its purpose in my projects.

### Example
```cpp
#include <Vec2.h>
#include <Vec3.h>

int main(void) {
    // Construct a 2D vector with all components set to zero
    Vec2 zero_vec; // zero_vec(0.f) also valid

    // Get the dot product of two vectors
    Vec2 vec_a(2.f, 3.f);
    Vec2 vec_b(4.f, -5.f);
    Vec2 dot = vec_a.Dot(vec_b);

    // Static methods also exist
    Vec2 dot_static = Vec2::Dot(vec_a, vec_b);

    // Arithmetic operations
    Vec2 add_vecs = vec_a + vec_b;
    Vec2 add_scalar = vec_a + 4.f;
    Vec2 mul_vecs = vec_a * vec_b;
    // etc...

    // Negation
    Vec2 vec_a_neg = -vec_a;

    // Get vector magnitude
    float mag = vec_a.Length();

    // Normalize vector
    Vec2 norm = vec_a.Normalize();

    // Cross product for 3D vectors
    Vec3 vec3_a(3.f, 4.f, 5.f);
    Vec3 vec3_b(6.f, 8.f, 10.f);
    Vec3 cross_ab = vec3_a.Cross(vec3_b);
    Vec3 cross_ab_static = Vec3::Cross(vec3_a, vec3_b);
}
```

## Build

Project is setup for Visual Studio since this is mostly going to be used for graphics programming. Testing uses GoogleTest framework built in to Visual Studio. Builds a static library. Easiest way to use it would be to just add it as an external project to your VS solution and add a reference to it in the project you're working on.
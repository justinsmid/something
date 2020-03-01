#ifndef VEC_HPP_
#define VEC_HPP_

template <typename T>
struct Vec2
{
    T x, y;
};

using Vec2i = Vec2<int>;

template <typename T> Vec2<T> vec2(T x, T y) { return {x, y}; }

//////////////////////////////
// Vector x Vector
//////////////////////////////

template <typename T> Vec2<T> constexpr operator+(Vec2<T> a, Vec2<T> b) { return {a.x + b.x, a.y + b.y}; }
template <typename T> Vec2<T> constexpr operator-(Vec2<T> a, Vec2<T> b) { return {a.x - b.x, a.y - b.y}; }
template <typename T> Vec2<T> constexpr operator*(Vec2<T> a, Vec2<T> b) { return {a.x * b.x, a.y * b.y}; }
template <typename T> Vec2<T> constexpr operator/(Vec2<T> a, Vec2<T> b) { return {a.x / b.x, a.y / b.y}; }
template <typename T> Vec2<T> constexpr &operator+=(Vec2<T> &a, Vec2<T> b) { a = a + b; return a; }
template <typename T> Vec2<T> constexpr &operator-=(Vec2<T> &a, Vec2<T> b) { a = a - b; return a; }
template <typename T> Vec2<T> constexpr &operator*=(Vec2<T> &a, Vec2<T> b) { a = a * b; return a; }
template <typename T> Vec2<T> constexpr &operator/=(Vec2<T> &a, Vec2<T> b) { a = a / b; return a; }

static inline
int sqr_dist(Vec2i p0, Vec2i p1)
{
    auto d = p0 - p1;
    return d.x * d.x + d.y * d.y;
}

//////////////////////////////
// Vector x Scalar
//////////////////////////////

template <typename T> Vec2<T> constexpr operator+(Vec2<T> a, T b) { return {a.x + b, a.y + b}; }
template <typename T> Vec2<T> constexpr operator-(Vec2<T> a, T b) { return {a.x - b, a.y - b}; }
template <typename T> Vec2<T> constexpr operator*(Vec2<T> a, T b) { return {a.x * b, a.y * b}; }
template <typename T> Vec2<T> constexpr operator/(Vec2<T> a, T b) { return {a.x / b, a.y / b}; }
template <typename T> Vec2<T> constexpr &operator+=(Vec2<T> &a, T b) { a = a + b; return a; }
template <typename T> Vec2<T> constexpr &operator-=(Vec2<T> &a, T b) { a = a - b; return a; }
template <typename T> Vec2<T> constexpr &operator*=(Vec2<T> &a, T b) { a = a * b; return a; }
template <typename T> Vec2<T> constexpr &operator/=(Vec2<T> &a, T b) { a = a / b; return a; }

//////////////////////////////
// Scalar x Vector
//////////////////////////////

template <typename T> Vec2<T> constexpr operator+(T a, Vec2<T> b) { return {a + b.x, a + b.y}; }
template <typename T> Vec2<T> constexpr operator-(T a, Vec2<T> b) { return {a - b.x, a - b.y}; }
template <typename T> Vec2<T> constexpr operator*(T a, Vec2<T> b) { return {a * b.x, a * b.y}; }
template <typename T> Vec2<T> constexpr operator/(T a, Vec2<T> b) { return {a / b.x, a / b.y}; }

#endif  // VEC_HPP_
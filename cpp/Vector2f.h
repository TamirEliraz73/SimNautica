//
// Created by Tamir Eliraz on 11/2/2024.
//

#ifndef CPP_VECTOR2F_H
#define CPP_VECTOR2F_H

#include <ostream>

namespace Geography {
    class Vector2f {
        private:
            float x;

            float y;

        public:
            explicit Vector2f();

            explicit Vector2f(float xy);

            explicit Vector2f(float x, float y);

            virtual ~Vector2f() = default;

        public:
            friend Vector2f operator+(const Vector2f &lhs, const Vector2f &rhs);

            friend Vector2f operator-(const Vector2f &lhs, const Vector2f &rhs);

            friend Vector2f operator*(const Vector2f &lhs, float c);

            Vector2f &operator+=(const Vector2f &other);

            Vector2f &operator-=(const Vector2f &other);

            Vector2f &operator*=(float c);

            friend std::ostream &operator<<(std::ostream &out, const Vector2f &rhs);

            [[nodiscard]] float getX() const;

            Vector2f &setX(float newX);

            [[nodiscard]] float getY() const;

            Vector2f &setY(float newY);

            [[maybe_unused]] Vector2f &setXY(float newX, float newY);

            [[maybe_unused]] Vector2f &setXY(float newXY);

    };
}

#endif //CPP_VECTOR2F_H

#pragma once

namespace pkodev { namespace structure {

    template <typename T>
    struct Vector2D final {
        T x{ T() };
        T y{ T() };
    };

    template <typename T>
    struct Vector3D final {
        T x{ T() };
        T y{ T() };
        T z{ T() };
    };

    using D3DXVECTOR3 = Vector3D<float>;
    using SIZE = Vector2D<long>;

    struct CCharacter final {
        char nop0[0x0024];
        unsigned int x;
        unsigned int y;
        char nop1[0x0CAC];
        unsigned int type;

        CCharacter() = delete;
        unsigned int GetX() const { return x / 100; }
        unsigned int GetY() const { return y / 100; }
        bool IsNpc() const { return type == 2; }
    };

} }
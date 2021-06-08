#include <stdio.h>

template <typename T, int N, int E0, int E1, int E2, int E3>
struct Swizzle {
public:
    // 返回在Swizzle中下表对应的元素
    T operator[](int i) const {
        constexpr int index[] = { E0, E1, E2, E3 };
        return elem(index[i]);
    }

    T& operator[](int i) {
        constexpr int index[] = { E0, E1, E2, E3 };
        return elem(index[i]);
    }

	operator vec<T, N>() const
    {
        return toVec<N>();
    }

    Swizzle& operator=(const vec<T, N>& v) {
        for (int i = 0; i < N; i++) {
            this->operator[](i) = v[i];
        }
        return *this;
    }

protected:
    // 返回原始向量中的下标
    T elem(int i) const
    {
        return reinterpret_cast<const T*>(this)[i];
    }

    T& elem(int i)
    {
        return reinterpret_cast<T*>(this)[i];
    }

    // 转化为具体的vec
    template <int len>
    vec<T, len> toVec() const;

    template <>
    vec<T, 1> toVec() const
    {
        return vec<T, 1> { this->operator[](0) }
    }

    template <>
    vec<T, 2> toVec() const
    {
        return vec<T, 2> { this->operator[](0), this->operator[](1) };
    }

    template <>
    vec<T, 3> toVec() const
    {
        return vec<T, 3> { this->operator[](0), this->operator[](1),
                           this->operator[](2) };
    }

    template <>
    vec<T, 4> toVec() const
    {
        return vec<T, 4> { this->operator[](0), this->operator[](1),
                           this->operator[](2), this->operator[](3) };
    }
};


int main(int argc, char **argv)
{
	Swizzle<float, 2, 0, 1, 2, 3> sw;
	
	
	
	return 0;
}

#include <iostream>

template <int N>
constexpr long long factorial()
{
    if (N < 0) {exit (1);}
    
        int y{1};
        for (int i {2}; i <= N; ++i)
        {
            y *= i; 
        }

        return y;

    
}

int main()
{
    static_assert(factorial<0>() == 1);
    static_assert(factorial<3>() == 6);
    static_assert(factorial<5>() == 120);

    factorial<-3>();

    return 0;
}
#include "Global.h"

// 快速幂算法
// 递归法和蒙哥马利法

// 递归法

ll quickMi::quickMi_recursion(ll a, ll b, ll c)
{
    if (b == 0)
        return 1;
    else if (b == 1)
        return a % c;
    ll tmp = quickMi_recursion(a, b >> 1, c);
    return (b & 1 == 1) ? (tmp * tmp * a) % c : (tmp * tmp) % c;
}
// 蒙哥马利法
ll quickMi::quickMi_mg(ll a, ll b, ll c)
{
    ll A = 1;
    ll T = a % c;
    while (b != 0)
    {
        if (b & 1 == 1)
            A = (A * T) % c;

        b >>= 1;
        T = (T * T) % c;
    }
    return A;
}
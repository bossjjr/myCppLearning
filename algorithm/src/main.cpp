#include "Global.h"

int main()
{
    // 快速幂测试
    quickMi M;
    M.coe = 2;
    M.exp = 3;
    M.mod = 5;
    cout << M.quickMi_mg(M.coe, M.exp, M.mod) << endl;
    cout << M.quickMi_recursion(M.coe, M.exp, M.mod) << endl;

    cout << "----------" << endl;
    // 排序测试
    mySort S;
    S.binary_insert_sort(S.s);
    return 0;
}
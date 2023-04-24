#include "Global.h"

int main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << quickMi_mg(i, 4, 10) << endl;
        cout << quickMi_recursion(i, 4, 10) << endl;
    }
}
#include "Global.h"

// Selection sort
void mySort::selection_sort(vector<int> &s)
{
    auto length = s.size();
    for (int i = 0; i != s.size() - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j != s.size(); j++)
        {
            if (s[min] > s[j])
                min = j;
        }
        swap(s[min], s[i]);
    }
}

// bubble sort
void mySort::bubble_sort(vector<int> &s)
{
    int length = s.size();
    int flag = true;
    while (flag)
    {
        flag = false;
        for (int i = 0; i != length - 1; i++)
        {
            if (s[i] > s[i + 1])
            {
                flag = true;
                swap(s[i], s[i + 1]);
            }
        }
    }
}

//
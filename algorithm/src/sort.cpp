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

// Insertion sort
void mySort::insertion_sort(vector<int> &s)
{
    auto length = s.size();
    for (int i = 1; i < length; i++)
    {
        int tmp = s[i];
        int j;
        for (j = i - 1; j >= 0; j--)
        {
            if (s[j] > tmp)
            {
                s[j + 1] = s[j];
            }
            else
            {
                break;
            }
        }
        s[j + 1] = tmp;
    }
}

// BinaryInsert sort
void mySort::binary_insert_sort(vector<int> &s)
{
    auto length = s.size();
    int left, right, middle;
    for (int i = 1; i < length; i++)
    {
        int tmp = s[i];
        left = 0;
        right = i - 1;
        while (left <= right)
        {
            middle = (left + right) / 2;
            if (s[middle] > tmp)
                right = middle - 1;
            else
                left = middle + 1;
        }
        for (int j = i - 1; j >= left; j--)
        {
            s[j + 1] = s[j];
        }
        s[left] = tmp;
    }
}
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib> //随机数函数头文件
#include <ctime>

#define ll long long

using namespace std;

// 快速幂算法类
class quickMi
{
public:
    // 递归法
    ll quickMi_recursion(ll a, ll b, ll c);

    // 蒙哥马利法
    ll quickMi_mg(ll a, ll b, ll c);

    ll exp;
    ll coe;
    ll mod;
};

// 排序算法类
class mySort
{

public:
    vector<int> s;

    mySort()
    {
        // 生成0-999的随机数
        srand((unsigned)time(NULL));
        for (int i = 0; i != 10; i++)
        {
            this->s.push_back(rand() % 1000);
        }
        for (auto it : s)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    ~mySort()
    {
        for (auto it = s.begin(); it != s.end(); it++)
        {
            cout << (*it) << " ";
        }
        cout << endl;
    }

    // Selection sort
    void selection_sort(vector<int> &s);
    // bubble sort
    void bubble_sort(vector<int> &s);
};

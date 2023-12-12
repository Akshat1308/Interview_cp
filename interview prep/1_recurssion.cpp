#include <bits/stdc++.h>
using namespace std;
// printing from 1 to n backtrack;
void f1(int i, int n)
{
    if (i < 1)
        return;
    f1(i - 1, n);
    cout << i << " ";
}
// printing from n to 1 backtrack;
void fn(int i, int n)
{
    if (i > n)
        return;
    fn(i + 1, n);
    cout << i << " ";
}
// sum of n number
void sumn(int i, int sum)
{
    if (i < 1)
    {
        cout << sum << endl;
        return;
    }
    sumn(i - 1, sum + i);
}
// sum of n numbers non parameterised
int sumnp(int n)
{
    if (n == 0)
        return 0;
    return n + sumnp(n - 1);
}
// reverse an array
void reverse(int l, int r, vector<int> &v)
{
    if (l >= r)
        return;
    swap(v[l], v[r]);
    reverse(l + 1, r - 1, v);
}
// fibonacci series
int nthterm(int n)
{
    if (n <= 1)
        return n;
    return nthterm(n - 1) + nthterm(n - 2);
}

int main()
{
    int n = 5;
    vector<int> v = {1, 2, 3, 4, 5};

    // f1(n, n);
    // fn(1, n);
    // sumn(3, 0);
    // cout << sumnp(3) << endl;

    // reverse(0, v.size() - 1, v);
    // for (auto i : v)
    //     cout << i << " ";

    cout << nthterm(4) << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {0, 1, 1, 1, 2, 2, 2, 0, 0, 2, 1, 2};
    int low = 0, mid = 0, high = v.size() - 1;
    while (mid <= high)
    {
        if (v[mid] == 0)
        {
            swap(v[low], v[mid]);
            low++;
            mid++;
        }
        else if (v[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(v[mid], v[high]);
            high--;
        }
    }
    for (auto i : v)
        cout << i << " ";
}
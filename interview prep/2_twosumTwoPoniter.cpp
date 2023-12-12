#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {2, 6, 5, 8, 11};
    int k = 14;
    int l = 0;
    int r = v.size() - 1;
    sort(v.begin(), v.end());
    while (l <= r)
    {
        int sum = v[l] + v[r];
        if (sum == k)
        {
            cout << "yes -->" << v[l] << " " << v[r] << endl;
            return 0;
        }
        if (sum > k)
            r--;
        else
            l++;
    }
}
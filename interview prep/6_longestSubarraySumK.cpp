#include <bits/stdc++.h>
using namespace std;
// hash map approach

int main()
{
    int k = 3;
    int len = INT_MIN;
    vector<int> v = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    map<int, int> mp;
    int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
        if (sum == k)
            len = max(len, i + 1);
        int rem = sum - k;
        if (mp.find(rem) != mp.end())
        {
            len = max(len, i - mp[rem]);
        }
        //  only update the sum when it is not present in the map
        if (mp.find(sum) == mp.end())
            mp[sum] = i;
    }
    cout << len << endl;
    return 0;
}

// two pointer approach (only works for positive array)
// int main()
// {
//     int left = 0;
//     int right = 0;
//     vector<int> v = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
//     int len = INT_MIN;
//     int sum = v[0];
//     int k = 3;

//     while (right < v.size())
//     {
//         while (left <= right && sum > k)
//         {
//             sum -= v[left];
//             left++;
//         }
//         if (sum == k)
//             len = max(len, right - left + 1);

//         right++;
//         if (right < v.size())
//             sum += v[right];
//     }
//     cout << len;
// }
#include <bits/stdc++.h>
using namespace std;

vector<int> selection_sort(vector<int> &v)
{
    int k = 0;
    while (k < v.size() - 1)
    {
        int min = INT_MAX;
        int minIndex = k;
        for (int i = k; i < v.size(); i++)
        {
            if (v[i] < min)
            {
                min = v[i];
                minIndex = i;
            }
        }
        swap(v[k], v[minIndex]);
        k++;
    }
    return v;
}

vector<int> bubble_sort(vector<int> &v)
{
    for (int j = 0; j < v.size() - 1; j++)
    {
        for (int i = 0; i < v.size() - 1 - j; i++)
        {
            if (v[i] > v[i + 1])
                swap(v[i], v[i + 1]);
        }
    }
    return v;
}

vector<int> insertion_sort(vector<int> &v)
{
    for (int i = 1; i < v.size(); i++)
    {
        int key = i;
        while (key > 0 && v[key - 1] > v[key])
        {
            swap(v[key - 1], v[key]);
            key--;
        }
    }
    return v;
}
int main()
{
    vector<int> v = {6,2,3,4,5,1};
    vector<int> ans;
    ans = selection_sort(v);
    // ans = bubble_sort(v);
    // ans = insertion_sort(v);
    for (auto i : ans)
        cout << i << " ";
    cout << endl;
    return 0;
}


////// A B C D E
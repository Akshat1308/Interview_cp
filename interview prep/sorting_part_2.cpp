#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &v, int low, int mid, int high)
{
    vector<int> ans;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (v[left] > v[right])
        {
            ans.push_back(v[right]);
            right++;
        }
        else
        {
            ans.push_back(v[left]);
            left++;
        }
    }

    while (left <= mid)
    {
        ans.push_back(v[left]);
        left++;
    }

    while (right <= high)
    {
        ans.push_back(v[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        v[i] = ans[i - low];
    }
}

void merge_sort(vector<int> &v, int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    merge_sort(v, low, mid);
    merge_sort(v, mid + 1, high);
    merge(v, low, mid, high);
}

////////////    quick sort    //////////////

int placing_function(vector<int> &v, int low, int high)
{

    int pivot = v[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (v[i] <= pivot && i <= high - 1) // as here we increase i till we get an element greater than the pivot
            i++;
        while (v[j] > pivot && j >= low + 1) // as here we decrease the value of j till we get an element lesser than i
            j--;
        if (i < j)
            swap(v[i], v[j]);
    }
    swap(v[low], v[j]);
    return j;
}
void quick_sort(vector<int> &v, int low, int high)
{
    if (low < high)
    {
        // partition stores the index of the freshly correctly placed partitioned element
        int partition = placing_function(v, low, high);
        quick_sort(v, low, partition - 1);
        quick_sort(v, partition + 1, high);
    }
}

int main()
{
    vector<int> v = {4, 6, 2, 5, 7, 9, 1, 3};
    int low = 0;
    int high = v.size() - 1;
    // merge_sort(v, low, high);
    quick_sort(v, low, high);
    for (auto i : v)
        cout << i << " ";
    cout << endl;
    return 0;
}
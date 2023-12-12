#include <bits/stdc++.h>

using namespace std;

void printSubarray(vector<int> &arr, int start, int end)
{
    for (int i = start; i <= end; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

void printAllSubarrays(vector<int> &arr, int start = 0)
{
    if (start == arr.size())
    {
        return; // Base case
    }

    for (int end = start; end < arr.size(); ++end)
    {
        printSubarray(arr, start, end); // Print subarray from start to end
    }

    printAllSubarrays(arr, start + 1);
}

int main()
{
    vector<int> arr = {1, 2, 3 ,4};

    printAllSubarrays(arr);

    return 0;
}
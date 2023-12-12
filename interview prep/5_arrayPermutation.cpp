#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> v, vector<int> container, vector<int> chk, int n)
{
    if (container.size() == n)
    {
        for (auto i : container)
            cout << i << " ";
        cout << endl;
        return;
    }
    for (int j = 0; j < n; j++)
    {
        if (!chk[j])
        {
            container.push_back(v[j]);
            chk[j] = 1;
            solve(v, container, chk, n);
            chk[j] = 0;
            container.pop_back();
        }
    }
}
int main()
{
    vector<int> v = {1, 2, 3};
    int n = v.size();
    vector<int> container;
    vector<int> chk(v.size(), 0);
    solve(v, container, chk, n);
}
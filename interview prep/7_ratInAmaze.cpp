#include <bits/stdc++.h>
using namespace std;
void solve(int i, int j, vector<vector<int>> v, vector<vector<int>> &visited, string s, vector<string> &ans, int n)
{
    if (i == n - 1 && j == n - 1)
    {
        ans.push_back(s);
        return;
    }
    // down
    if (i + 1 < n && !visited[i + 1][j] && v[i + 1][j] == 1)
    {
        visited[i][j] = 1;
        solve(i + 1, j, v, visited, s + 'D', ans, n);
        visited[i][j] = 0;
    }
    // left
    if (j - 1 >= 0 && !visited[i][j - 1] && v[i][j - 1] == 1)
    {
        visited[i][j] = 1;
        solve(i, j - 1, v, visited, s + 'L', ans, n);
        visited[i][j] = 0;
    }
    // right
    if (j + 1 < n && !visited[i][j + 1] && v[i][j + 1] == 1)
    {
        visited[i][j] = 1;
        solve(i, j + 1, v, visited, s + 'R', ans, n);
        visited[i][j] = 0;
    }

    // up
    if (i - 1 >= 0 && !visited[i - 1][j] && v[i - 1][j] == 1)
    {
        visited[i][j] = 1;
        solve(i - 1, j, v, visited, s + 'U', ans, n);
        visited[i][j] = 0;
    }
}
int main()
{
    int n = 4;

    vector<vector<int>> m = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
    vector<string> answer;
    string s;
    vector<vector<int>> visited(n, vector<int>(n, 0));
    solve(0, 0, m, visited, s, answer, n);
    for (auto i : answer)
        cout << i << endl;
    return 0;
}
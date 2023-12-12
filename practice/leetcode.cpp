#include <bits/stdc++.h>
using namespace std;
int main()
{
    // stack<int> s;
    // s.push(1);
    // s.push(2);
    // while (!s.empty())
    // {
    //     int i = s.top();
    //     cout << i << " ";
    //     s.pop();
    // }

    // string s="akshat";
    // s+=" ";
    // s+="Surana";
    // cout<<s;

    // stack<char>s;
    // s.push('&');
    // while (!s.empty())
    // {
    //     char i = s.top();
    //     cout << i << " ";
    //     s.pop();
    // }

    string s = "akshat is a good boy ans a sciencere boy";
    stringstream ss(s);
    string word;
    map<string, int> m;
    while (ss >> word)
        m[word]++;
    for (auto i : m)
        cout << i.first << " " << i.second << endl;
    return 0;
}
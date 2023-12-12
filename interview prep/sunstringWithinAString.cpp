#include <bits/stdc++.h>
using namespace std;
int main()
{
    string txt = "hellow, hello , hellow ";
    string pattern = "hello";
    int pos = 0, count = 0;
    while ((pos = txt.find(pattern, pos)) != std::string::npos)
    {
        count++;
        cout << "poitiion : " << pos << endl;
        pos += pattern.length();
    }
    cout << count << endl;
    return 0;
}
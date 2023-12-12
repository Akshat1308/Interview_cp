#include <bits/stdc++.h>
using namespace std;
int main()
{

    string str = "akhat";
    str.insert(2, "s");
    str.erase(2, 1);
    cout << str << endl;
    vector<int> v = {1, 2, 3, 4, 5};
    v.insert(v.end(), 6);
    v.erase(v.begin() + 1);
    v.insert(v.begin() + 1, 2);
    v.erase(v.begin() + 1, v.end() - 1);
    for (auto i : v)
        cout << i << " ";

    return 0;
}
// so baically insert function takes two parameters i.e (position , value)
// to delete an element from a string we use erase function which have two parameters i.e (position , how_many)
// here we cannot use str.begin() when giving position it gives error
// to dete an element from a vector we use erase functio which have one parameter i.e the position here we can use v.begin() to give the position
// we can also pass two two para meters in this erase function i.e (from , to);

// to directly split a string in c++ : https://www.geeksforgeeks.org/split-string-by-space-into-vector-in-cpp-stl/

// string s = "akshat is a good boy and a sciencere boy";
// stringstream ss(s);
// string word;
// map<string, int> m;
// while (ss >> word)
//     m[word]++;
// for (auto i : m)
//     cout << i.first << " " << i.second << endl;
// return 0;
#include <bits/stdc++.h>
using namespace std;
// recurssion on subsequence
void subseq(int i, vector<int> &v, vector<int> vo, int n)
{
    if (i >= n)
    {
        for (auto i : v)
            cout << i << " ";
        cout << endl;
        return;
    }
    v.push_back(vo[i]);
    subseq(i + 1, v, vo, n);
    v.pop_back();
    subseq(i + 1, v, vo, n);
}
// print subsequence with sum k
void subSeqSumK(int i, vector<int> &v, vector<int> vo, int n, int sum, int k)
{
    if (i >= n)
    {
        if (sum == k)
        {
            for (auto i : v)
                cout << i << " ";
            cout << endl;
        }
        return;
    }
    v.push_back(vo[i]);
    sum += vo[i];
    subSeqSumK(i + 1, v, vo, n, sum, k);
    v.pop_back();
    sum -= vo[i];
    subSeqSumK(i + 1, v, vo, n, sum, k);
}
int main()
{

    vector<int> subSeq = {3, 1, 2, 1};
    int n = subSeq.size();
    vector<int> container;
    subseq(0, container, subSeq, n);
    cout << "seq with sum k\n"
         << endl;
    subSeqSumK(0, container, subSeq, n, 0, 3);
}

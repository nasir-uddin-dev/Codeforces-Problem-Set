#include <bits/stdc++.h>
using namespace std;

void IsSorted()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) //0(n)
        cin >> a[i];

    vector<int> copy_a = a;
    // for (auto val : copy_a)
    //     cout << val << " ";
    // cout << endl;
    //0(nlogn)
    sort(copy_a.begin(), copy_a.end()); //no-decreasing means increasing order
    //0(1)
    if (copy_a == a || k > 1)   //If the array is sorted or k > 1. Print "YES"
        cout << "YES" << endl;
    else
        cout << "NO" << endl;   //else k = 1. Print "NO"
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        IsSorted();
    return 0;
}

//TimeComplexity -> 0(nlogn) -> 0(100 * log2(100)) -> 0(100*7) -> 700
//SpaceComplexity -> 0(n) ->100
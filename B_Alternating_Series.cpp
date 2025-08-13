// https://codeforces.com/contest/2131/problem/B
// Alternating Series
// Your are given an integer n . Call an array a of length n good if :
//   For all 1 <= i < n, a[i]*a[i+1] < 0 (the product of adjacent elements is negative)
//   For all subarrays with length at least 2, the sum of all elements in the subarray is positive

// Additionally , we say a good array a of length n is better than another good array b of length n if[a1, a2,.....a[n]] is lexicographically smaller than [b1,b2,b3,.....b[n]]. Note that |z| denotes the absolute value of integer z.
// Output a good array of length n such that it is better than every other good array of length n.

// An array C is a subarray of an array D if C can be obtained from D by the deletion of several (possibly, zero or all) elements from the begining and several (possibly, zero or all) elements from the end.
// An integer X is positive if X > 0
// A sequence A is lexicographically smaller than a sequence B if and only if one of the following holds :
//   A is a prefix of B, but A is not equal B or
//  in the first position where A and B differ, the sequence A has a smaller element than the corresponding element in B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        bool pos = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (pos)
                cout << 3 << " ";
            else
                cout << -1 << " ";
            pos = !pos;
        }
        if(pos)
        cout << 2 << endl;
        else
        cout << -1 << endl;
    }
    return 0;
}
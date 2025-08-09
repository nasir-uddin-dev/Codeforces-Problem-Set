// Number of Smaller
// Let's apply the same technique to solve a different problem.
// We have two arrays a and b. We want to calculate for each element bj how many such i exist that ai < bj.
// This is a fairly common task, often encountered on a variety of occasions.
// How to solve it ? First, let's sort both arrays (if initially) they were given usorted). Now you can use binary search to answer the problem (we covered it in another chapter).
// For each element of b, you need to find the prefix of array a that is less than this element.
// But you can do without binary search by using the two pointer method. Suppose we are doing the same merge sort as in the previous task. We will get a large sorted array c containing all the elements from a and b.
// How to solve the problem using the resulting array c ? Let's see to which position of c element bj moved. Where are the elements of array a that are less than bj ? They are in c to the left of bj. Therefore, you need to find out how many elements came from array a on the prefix of array c before the element bj.
// For implementation, you can use the same algorithm as in the previous task. Array c itself is not useful to us.  Let's take a look at the moment when we move an element from array b.
// How many elements from a were moved before it ? These are all elements with indices from 0 to i-1 (i is a pointer to first non-deleted element in a). That is, there are exactly i such elements
// We no longer need to move elements into array c. We simply move the pointers forward and respond to requests during the 'former' moving of elements from b.
// Also , in this task, you can write simpler and more intutive code. Instead of a single while loop with conditions inside, you can loop over the elements of array b (loop over the position of the j pointer). And with the second for loop move the first pointer i forward while ai < bj.



#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> b(m);
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int cnt = 0;
    for (int i = 0; i < m; i++) // m integers bi elements the second array
    {
        for (int j = 0; j < n; j++) // n integers ai elements the first array
        {
            if (a[j] < b[i]) // Whether the first array elements is strictly less than the second arra
            {
            //    b[j] += cnt;
                
            }
            else
                break; // Otherwise, break
        }
    }

    // for (int i = 0; i < m; i++)
    //     cout << b[i] << endl;
    return 0;
}
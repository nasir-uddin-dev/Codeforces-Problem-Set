//https://codeforces.com/blog/entry/127664
//Upscaling
//You just need to implement what is written. One way is to go cell-by-cell in a regular n*n checkboard, and construct the larger one one cell at a time by coping cell (i,j) into cells (2i, 2j), (2i + 1, 2j), (2i, 2j + 1), (2i + 1, 2j + 1).
// A faster solution is to notice that if we round down coordinates (x,y) int the enlarged checkboard to ([x/2], [y/2]), we get the corresponding cell in the original checkboard. And to output a regular checkboard, we output # if the sum of coordinates is even, and . if it is odd
//So the faster implementation is : iterate over all cells (x,y) in the 2n * 2n checkboard. If [x/2] + [y/2] is even output #, else output .
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

        for (int i = 0; i < 2 * n; i++)
        {
            for (int j = 0; j < 2 * n; j++)
            {
                if ((i / 2 + j / 2) % 2 == 0)   //
                    cout << "#";
                else
                    cout << ".";
            }
            cout << endl;
        }
    }
   
    return 0;
}


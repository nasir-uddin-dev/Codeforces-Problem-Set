#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<string> v1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            string s1;
            while (s[i] >= 'A' && s[i] <= 'Z')
            {
                s1 += s[i];
                i++;
            }
            v1.push_back(s1);

           
        }

      
        // else
        // {
        //     if (s[i] >= '0' && s[i] <= '9')
        //     {
        //         // cout << s[i]; // 2355
        //     }
        // }
    }

    cout << v1[4];
    return 0;
}
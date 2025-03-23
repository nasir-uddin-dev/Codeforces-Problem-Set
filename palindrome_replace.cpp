#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int len = s.size();
    for (int i = 0, j = len - 1; i < len; i++, j--)
    {
        if (s[i] == 'a' && s[j] == '?')

            s[j] = 'a';

        else if (s[i] == '?' && s[j] == 'z')
            s[i] = 'z';
    }

    for (int i = 0; i < s.size(); i++)
        cout << s[i];
    return 0;
}
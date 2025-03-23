#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> v;

    void push(int val)
    {
        v.push_back(val); // 0(1)
    }

    void pop()
    {
        v.pop_back(); // 0(1)
    }

    int top()
    {
        return v.back(); // 0(1)
    }

    int size()
    {
        return v.size(); // 0(1)
    }

    bool empty()
    {
        return v.empty(); // 0(1)
    }
};

int main()
{
    myStack st;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}
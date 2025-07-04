#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        b-=a;
        long long l=2,r=1000000000;
        while(l<r)
        {
            long long m=(l+r)/2;
            if(m*(m-1)/2<=b)
            {
                l=m+1;
            }
            else
            {
                r=m;
            }
        }
        cout<<l-1<<endl;
    }
}
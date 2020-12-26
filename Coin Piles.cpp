
similar with
CF
link : https://codeforces.com/contest/1366/problem/A

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll t; cin >> t;
    while(t--)
    {
        ll a, b; cin >> a >> b;
        if(!a and !b)
        {
            cout << "YES\n";
        }
        else if(!a or !b)
        {
            cout << "NO\n";
        }

        else if(a and b)
        {
            if((a + b) % 3 == 0)
            {
                ll x = min(a, b);
            ll y = max(a, b);
            if(x * 2 >= y)
            {
                cout << "YES\n";
            }
            if(x * 2 < y)
            {
                cout << "NO\n";
            }
            }
            if((a + b) % 3)
            {
                cout << "NO\n";

            }
        }



    }
}


#include <bits/stdc++.h>
#define ll long long
using namespace std;
//vector < ll > a;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    string s; cin >> s;
    ll x = s.size();
    ll cnt = 0, mx = -2000000;
    for(ll i = 0; i < x; i++)
    {
        if(s[i] == s[i + 1])
        {
            cnt++;
            mx = max(mx , cnt);
        }
        else
        {
            cnt = 0;
        }
    }
    if(mx != -2000000)
        return cout << mx + 1, 0;
    else
        return cout << 1, 0;


}

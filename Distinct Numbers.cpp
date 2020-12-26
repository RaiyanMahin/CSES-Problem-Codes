#include <bits/stdc++.h>
#define ll long long
using namespace std;
set < ll > a;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll n; cin >> n;
    while(n--)
    {
        ll x; cin >> x;
        a.insert(x);
    }
    cout << (ll) a.size();
}

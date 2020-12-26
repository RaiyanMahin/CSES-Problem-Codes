#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector < ll > a;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll n; cin >> n;
    ll s = 0;
    ll ans = n * (n + 1LL) / 2LL;
    n--;
    while(n--)
    {
        ll x; cin >> x;
        s += x;
    }
    return cout << ans - s , 0;


}

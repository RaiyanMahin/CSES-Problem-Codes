#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll n; cin >> n;
    ll ans = 0;
    for(ll i = 5; (n / i) >= 1; i *= 5)
    {
        ans += (n / i);
    }
    return cout << ans , 0;

}


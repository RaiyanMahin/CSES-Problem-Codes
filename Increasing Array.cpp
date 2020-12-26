#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll n; cin >> n;
    ll a[n + 1] = {0};
    for(ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll mx = a[0] , ans = 0;
    for(ll i = 1; i < n; i++)
    {
       if(mx > a[i])
       {
           ans += (mx - a[i]);

       }
       mx = max(mx , a[i]);


    }
    return cout << ans , 0;


}


#include <bits/stdc++.h>
#define ll long long
const ll M = 1000000007;
using namespace std;
ll bigmod(ll a, ll b, ll M)
{
    if(b == 0) return 1LL;
    if(b & 1)
    {
        return ( ( a % M) * ( bigmod(a, b - 1, M) % M) ) % M;
    }
    else
    {
        ll tmp = bigmod(a, b / 2 , M) % M;
        return (tmp * tmp) % M;
    }

}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll n; cin >> n;
    cout << bigmod(2LL , n , M);
    return 0;

}


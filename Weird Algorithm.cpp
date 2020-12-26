#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector < ll > a;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll n; cin >> n;
    a.push_back(n);
    while(n != 1LL)
    {
        if(n == 1LL)
            break;
        else if(n & 1 and n > 1LL)
        {


            n = (3 * n) + 1LL;
        }
        else if(! (n & 1) and n > 1LL )
        {

            n /= 2LL;
        }
        a.push_back(n);


    }
    for(ll i : a)
    {
        cout << i << ' ';
    }
    cout << '\n';


}

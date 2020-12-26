
#include <bits/stdc++.h>
#define ll long long
using namespace std;
set < ll > a;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
//    ll t; cin >> t;
//    while(t--)
//    {
        ll n; cin >> n;
    if(n == 3 or n == 2)

    {
        cout << "NO SOLUTION\n";
    }

    else
    {
        if(n & 1)
        {

            for(ll i = n - 1; i >= 2; i -= 2)
                cout << i << ' ';
            for(ll i = n; i >= 1; i -= 2)
                cout << i << ' ';
        }
        if(! (n & 1) )
        {
            for(ll i = n - 1; i >= 1; i -= 2)
                cout << i << ' ';
            for(ll i = n; i >= 2; i -= 2)
                cout << i << ' ';


        }
        cout << '\n';



    }

}

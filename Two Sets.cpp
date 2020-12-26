#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll n; cin >> n;
    ll a[n];
    memset(a, -1,sizeof(a));
    if(n < 3)
    {
        return cout << "NO", 0;

    }
    if(n == 3)
    {
        cout << "YES\n";
        cout << 2 << endl << "1 2\n" << 1 << endl << 3;
        return 0;
    }
    ll s = n * (n + 1) / 2LL;
    if(s & 1)
    {
        return cout << "NO", 0;

    }
    ll x = (s / 2);
    cout << "YES\n";

    ll y = (n / 2);

    if(!(n & 1))
    {
        ll i = 1 , j = n;
        ll u1 = 0, u2 = 0;
        cout << (n / 2) << '\n';
        ll cnt = 0;
        while(cnt != (n / 2))
        {
            if(cnt == (n / 2))
                break;
            cout << i << ' ';
            cout << j << ' ';
            u1 = i;
            u2 = j;
            i++;
            j--;
            cnt += 2;


        }
        cout << endl;
        cout << (n / 2) << endl;
        for(ll i = u1  + 1; i < u2; i++)
        {
            cout << i << ' ';
        }
        return 0;
    }
    if(n & 1)
    {
        cout << (n / 2) << '\n';
        ll i = 1 , j = n;
        ll u1 = 0, u2 = 0;

        ll cnt = 0;
        ll sum = 0;
        while(cnt != (n / 2) - 1)
        {
            if(cnt == (n / 2) - 1)
                break;
            cout << i << ' ';
            cout << j << ' ';
            u1 = i;
            u2 = j;
            sum += i;
            sum += j;
            i++;
            j--;
            cnt += 2;


        }
        ll lagbe = (x - sum);
        cout << lagbe << '\n';
        cout << (n / 2) + 1<< endl;
        for(ll i = u1  + 1; i < u2 - 1; i++)
        {
            cout << i << ' ';
        }
        return 0;



    }






}


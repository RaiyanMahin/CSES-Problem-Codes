#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
map < ll, ll > mp;
void baal()
{
    cout << "IMPOSSIBLE\n";
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll n , k; cin >> n >> k;
    vector < ll > a(n);
    for(ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    if(n == 1 or k == 1)
    {
        baal();
        return 0;
    }
    ll ache = 0 , s_2 = 0 , indx = -1;
    for(ll i = 0; i < n; i++)
    {
        if(a[i] < k)
        {
            ll op = k - a[i];


        if(mp[op])
        {
            if(a[i] != op)
            {
                ache = 1;

                indx = i;
                cout << (i + 1) << ' ';
                s_2 = op;
                break;

            }
            if(a[i] == op)
            {
                if(mp[op] > 1)
                {
                    ache = 1;
                    indx = i;
                    cout << (i + 1) << ' ';
                    s_2 = op;
                    break;

                }

            }



        }
        }
    }
    if(!ache)
    {
        baal();
        return 0;
    }
    if(ache)
    {
        for(ll i = 0; i < n ; i++)
        {
            if(s_2 == a[i] and indx != i)
            {
                return cout << (i + 1) , 0;
            }
        }
    }


}


#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
int main()
{
   ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
   string s; cin >> s; ll x = s.size() , odd = 0 , ev = 0;
   map < char , ll > mp;
   vector < pair < ll , char> > vp;
    for(char i : s)
    {
        mp[i]++;

    }
    char c_odd;
    for(auto i : mp)
    {
        if(i.second & 1)
        {
            odd++;
            c_odd = i.first;
        }
        if(! (i.second & 1) )
        {
            ev++;
        }
    }
    if(mp.size() == 1)
    {
        return cout << s , 0;
    }
    if(!ev)
    {
        return cout << "NO SOLUTION\n", 0;
    }
    if(odd > 1)
    {
        return cout << "NO SOLUTION\n", 0;

    }
     for(auto i : mp)
    {
        vp.push_back( {  i.second , i.first  } );
    }
    sort(vp.rbegin(), vp.rend());
//    for(auto i : vp)
//    {
//        cout << i.first << ' ' << i.second << endl;
//    }
//
     string as = "";
     for(auto i : vp)
     {
         if(i.first % 2 == 0)
         {
             string fd((i.first / 2) , i.second);
             as += fd;
         }

     }
     cout << as;
     if(odd)
     {
         ll pp = mp[c_odd];
         while(pp--)
         {
             cout << c_odd;
         }
     }
     reverse(as.begin(), as.end());
     cout << as;
     return 0;












}


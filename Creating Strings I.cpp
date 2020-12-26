#include <bits/stdc++.h>
#define ll long long
using namespace std;
//ll M = 1000000009;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    string s; cin >> s;
    vector < string > vs;
    vs.push_back(s);
    string S = s;
    while(next_permutation(s.begin(), s.end()))
    {
        vs.push_back(s);
    }
    while(prev_permutation(S.begin(), S.end()))
    {
        vs.push_back(S);
    }
    cout << (ll) vs.size() << endl;
    sort(vs.begin(), vs.end());
    for(auto i : vs)
        cout << i << endl;





}


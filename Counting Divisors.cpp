#include <bits/stdc++.h>
using ll = int;
using namespace std;
#define mx 10000009
bitset <mx> mark;
vector <ll> prime;
void sieve() {
    mark[0] = mark[1] = 1;
    prime.push_back(2);
    int lim = sqrt(mx * 1.0) + 2;
    for (int i = 4; i < mx; i += 2) mark[i] = 1;
    for (int i = 3; i < mx; i += 2) {
        if (!mark[i]) {
            prime.push_back(i);
            if (i <= lim)
                for (int j = i * i; j < mx; j += i)
                    mark[j] = 1;
        }
    }
}
ll sieVVe(ll n)
{
    if(n == 2)
    {
        return 1;
    }
    if(n > 2 and n % 2 == 0)
    {
        return -1;
    }
    if(n > 1 and n & 1)
    {
        for(ll i = 2; i * i <= n; i++)
        {
            if(n % i == 0)
            {
                return -1;
            }
        }
        return 1;

    }


}


int NOD ( int n ) {
    int sqrtn = sqrt ( n );
    int res = 1;
    for ( int i = 0; i < prime.size() && prime[i] <= sqrtn; i++ ) {
        if ( n % prime[i] == 0 ) {
            int p = 0; // Counter for power of prime
            while ( n % prime[i] == 0 ) {
                n /= prime[i];
                p++;
            }
            sqrtn = sqrt ( n );
            p++; // Increase it by one at end
            res *= p; // Multiply with answer
        }
    }
    if ( n != 1 ) {
        res *= 2; // Remaining prime has power p^1. So multiply with 2/
    }
    return res;
}
main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    sieve();
    ll t;
    scanf("%d", &t);
    while(t--)
    {
        ll n;
        scanf("%d", &n);
        if(n == 1)
        {
            printf("1\n");
        }
        if(n > 1)
        {
            ll p = sieVVe(n);
            if(p == 1)
            {
                printf("2\n");
            }
            if(p == -1)
            {


                printf("%d\n" , NOD(n));


            }
        }
    }




}




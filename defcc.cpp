#include <bits/stdc++.h>
using namespace std;


#define RUN_MULTIPLE 1


#define endl '\n'
#define sz(x) (int)(x).size()
#define pb push_back
#define ll long long
#define length(s) (int) s.size()
#define int long long
#define lld long double
#define vll vector<long long>
#define vi vector<int>
#define vpll vector<pair<long long,long long> >
#define forn(i,n) for(int i=0;i<n;i++)
#define rforn(i,n) for(int i=n-1;i>=0;i--)
#define strfor(i,s) for(int i = 0;s[i]!='\0';i++) 
#define all(x) x.begin(), x.end()
#define tr(v) for( auto &x : v)
#define printv(v) tr(v){ cout<<x<<endl; }
#define printvline(v) tr(v){ cout<<x<<' '; } cout<<'\n';
#define println() cout<<'\n'
#define ff first
#define ss second
#define umap unordered_map
#define precision(x) std::cout << std::setprecision(x) << std::fixed;


/* Iterative Function to calculate (x^y)%p in O(log y) */
ll power_mod(ll x, ll y, ll p)
{
    ll res = 1;
    x = x % p; 
    if (x == 0) return 0;
 
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;
 
         y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}

template <typename t>
t raise(t a,unsigned int b)
{
    if(b==1)
        return a;
    else
    {
        if(b&1)
        {
            t temp = raise(a,(b-1)/2);
            return a*temp*temp;
        }
        else
        {
            t temp = raise(a,b/2);
            return temp*temp;
        }
    }
}

void solve()
{
    
  

}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #if RUN_MULTIPLE
    int t;
    cin>>t;

    while(t--)
    #endif
        solve();   
    
    return 0;
}

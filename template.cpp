#define DEBUG 1
#define TEST_CASE 1

#include <bits/stdc++.h>
using namespace std;

#define mod 10e9 + 7
#define endl '\n'

#define ll long long int
#define ull unsigned ll

#define vt vector
#define uset unordered_set
#define umap unordered_map
#define mset multiset
#define umset unordered_multiset

#define in insert
#define pb push_back
#define ff first
#define ss second

#define LF(i, beg, end) for (ll i = beg; i < end; ++i)
#define LR(i, end, beg) for (ll i = end; i >= beg; --i)
#define F(i, end) LF(i, 0, end)
#define R(i, end) LR(i, end, 0)

#define DEBUGFUNC _log

void _debugDisp(ll e)
{
  cout << "<" << e << "> ";
}

void DEBUGFUNC(ll v)
{
  #if DEBUG

  _debugDisp(v);

  #endif
}

void DEBUGFUNC(vt<ll> v)
{
  #if DEBUG

  for (auto e : v) {
    _debugDisp(e);
  }
  
  #endif
}

void solve()
{
  //
}

int main()
{
  ios_base::sync_with_stdio(false); 
  cin.tie(NULL);
  cout.tie(NULL);
    
  ll c = 1;

  #if TEST_CASE
  cin >> c;
  #endif

  for (ll i = 1; i <= c; ++i) {
    // cout << "Case #" << i << ": ";
    solve();
  }
    
  return 0;
}

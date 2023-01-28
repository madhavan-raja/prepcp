#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl '\n'
#define mod (ll)(1e9 + 7)
#define all(col) (col).begin(), (col).end()

ll power(ll x, ll y) {
  ll res = 1;

  while (y > 0) {
    if (y & 1) {
      res = (res * x) % mod;
    }

    y >>= 1;
    x = (x * x) % mod;
  }

  return res;
}

ll modInv(ll n) {
  return power(n, mod - 2);
}

ll ncr(ll n, ll r) {
  if (n < r) return 0;
  if (r == 0) return 1;

  vector<ll> fact(n + 1);
  fact[0] = 1;

  for (ll i = 1; i <= n; ++i) {
    fact[i] = (fact[i - 1] * i) % mod;
  }

  return (fact[n] * modInv(fact[r]) % mod * modInv(fact[n - r]) % mod) % mod;
}

#ifdef ONLINE_JUDGE
#define debug(x...) "Never Gonna Give You Up"
#else
#include "debug.cpp"
#endif

void solve() {
  ll n;
  cin >> n;

  vector<ll> a(n);
  for (auto &e : a) cin >> e;

  //
}

int main() {
  ios_base::sync_with_stdio(false); 
  cin.tie(NULL);
  cout.tie(NULL);
    
  ll c = 1;
  cin >> c;

  for (ll i = 1; i <= c; ++i) {
    // cout << "Case #" << i << ": ";
    solve();
  }

  return 0;
}

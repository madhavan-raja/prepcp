#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl '\n'
#define mod (ll)(1e9 + 7)
#define all(col) (col).begin(), (col).end()

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
  
  debug(a);
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

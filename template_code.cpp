#include <bits/stdc++.h>
using namespace std;

#define mod (ll)(1e9 + 7)
#define endl '\n'

#define ll long long int

#define all(col) (col).begin(), (col).end()

void __debug_print(int x) {cerr << x;}
void __debug_print(long x) {cerr << x;}
void __debug_print(long long x) {cerr << x;}
void __debug_print(unsigned x) {cerr << x;}
void __debug_print(unsigned long x) {cerr << x;}
void __debug_print(unsigned long long x) {cerr << x;}
void __debug_print(float x) {cerr << x;}
void __debug_print(double x) {cerr << x;}
void __debug_print(long double x) {cerr << x;}
void __debug_print(char x) {cerr << '\'' << x << '\'';}
void __debug_print(const char *x) {cerr << '\"' << x << '\"';}
void __debug_print(const string &x) {cerr << '\"' << x << '\"';}
void __debug_print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __debug_print(const pair<T, V> &x) {
  cerr << '{';
  __debug_print(x.first);
  cerr << ',';
  __debug_print(x.second);
  cerr << '}';
}

template<typename T>
void __debug_print(const T &x) {
  int f = 0;
  cerr << '{';
  for (auto &i: x) {
    cerr << (f++ ? ", " : "");
    __debug_print(i);
  }
  cerr << "}";
}

void _debug_print() {
  cerr << "]" << endl;
}

template <typename T, typename... V>
void _debug_print(T t, V... v) {
  __debug_print(t);
  if (sizeof...(v))
    cerr << ", ";
  _debug_print(v...);
}

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
#define debug(x...)
#else
#define debug(x...) cerr << "[" << #x << " = "; _debug_print(x);
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

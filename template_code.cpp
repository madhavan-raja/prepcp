#include <bits/stdc++.h>
using namespace std;

#define mod (ll)(1e9 + 7)
#define endl '\n'

#define ll long long int
#define ull unsigned ll

#define pll pair<ll, ll>
#define ld long double

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

#define all(col) (col).begin(), (col).end()

ll fast_pow(ll a, ll p) {
  ll res = 1;

  while (p) {
    if (p % 2 == 0) {
      a = a * a % mod;
      p /= 2;
    } else {
      res = res * a % mod;
      p--;
    }
  }

  return res;
}

ll fact(ll n) {
  ll res = 1;

  LF(i, 1, n + 1) {
    res = res * i % mod;
  }

  return res;
}

ll NCR(ll n, ll r) {
  return fact(n) * 1ll * fast_pow(fact(r), mod - 2) % mod * 1ll * fast_pow(fact(n - r), mod - 2) % mod;
}

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

#ifdef ONLINE_JUDGE
#define debug(x...)
#define CLOCK
#else
#define debug(x...) cerr << "[" << #x << " = "; _debug_print(x);
#define CLOCK cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms" << endl
#endif

void solve() {
  ll n;
  cin >> n;

  vt<ll> a(n);
  for (auto &e : a) cin >> e;

  //
}

int main() {
  ios_base::sync_with_stdio(false); 
  cin.tie(NULL);
  cout.tie(NULL);
    
  ll c = 1;
  cin >> c;

  LF(i, 1, c + 1) {
    // cout << "Case #" << i << ": ";
    solve();
  }

  CLOCK;
    
  return 0;
}

#include <bits/stdc++.h>
using namespace std;

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

#define debug(x...) cerr << "[" << #x << " = "; _debug_print(x);

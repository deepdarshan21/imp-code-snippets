/*
        BY:- DEEPDARSHAN
*/
#include <bits/stdc++.h>
using namespace std;
#define For(i, a, n, k) for (ll i = a; i < n; i += k)
#define F first
#define S second
#define MP make_pair
#define PB push_back
typedef long long ll;
typedef vector<ll> vi;
typedef vector<vector<ll>> vii;
typedef vector<pair<int, int>> vpi;
typedef pair<int, int> pi;
typedef set<ll> si;
#define usi unordered_set<ll>
typedef map<ll, ll> mi;
typedef unordered_map<ll, ll> umi;
ll mod = 1e9 + 7;  // prime number
// use this when needed to multiply multiplicative inverse and then find modulo
ll inv(ll a) {
    if (a == 1) return 1;
    return (mod - mod / a) * inv(mod % a) % mod;
}
ll nCr(ll n, ll r) {
    if (r > n) return 0;
    if (r == 0 || r == n) return 1;
    ll res = 1;
    For(i, 1, r + 1, 1) {
        res = (res * (n - r + i)) % mod;
        res = (res * inv(i)) % mod;
    }
    return res;
}
void solve();
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

void solve() {
    // start writing code here
    
}

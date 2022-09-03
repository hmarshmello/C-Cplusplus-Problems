#include <iostream>
#include <vector>
using namespace std;
#define N 100002
#define MOD 1000000007
#define fo(i, b, n) for (long i = b; i < n; ++i)
#define rfo(i, b, n) for (long i = b; i >= n; --i)
#define all(ar) ar.begin(), ar.end()
#define rall(ar) ar.rbegin(), ar.rend()
#define mem(ar, val) memset(ar, (val), sizeof(ar))
#define fi first
#define se second
#define pb push_back
#define deb(x) cout << #x << '=' << x << endl;
#define deb2(x, y) cout << #x << '=' << x << ', ' << #y << '=' << y << endl;

#define fastIO \
ios_base::sync_with_stdio(false); \
cin.tie(NULL); \
cout.precision(12);

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef vector<vi> vvi;                            
typedef vector<vll> vvll;
 
const double PI = 3.1415926535897932384626;
const ll oo = 1e18;

ll n, k, u, v;
vll adj[10 * N], ar(10 * N), res(10 * N);
unordered_map<ll, vll> mp;

void dfs(ll ver, ll par){
    for (auto &edge : adj[ver]){
        if (edge == par)
        continue;
        ll tmp = mp[ar[edge]].size();
        if (tmp - k >= 0) res[edge] = mp[ar[edge]][tmp - k];
        else res[edge] = -1;
        mp[ar[edge]].pb(edge);
        dfs(edge, ver);
    mp[ar[edge]].pop_back();
    }

}

void solution(){
    cin >> n >> k;
    fo(i, 1, n + 1) cin >> ar[i];
    fo(i, 1, n){
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    res[1] = -1;
    mp[ar[1]].pb(1);
    dfs(1, -1);
    fo(i, 1, n + 1) cout << res[i] << " ";
}

signed main(){
    fastIO;
    long t = 1;
    // cin >> t;
    while (t--)
    solution();
    return 0;
}
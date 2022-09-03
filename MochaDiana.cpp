#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
const ll mod = 1e9 + 7,inf = 1e18;
#define pb push_back
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void setIO()
{
    fast;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}
struct DSU
{
    int n;
    vi p;
    DSU(int N)
    {
        n = N;
        p.assign(n + 1,-1);
        for (int i = 0;i<=n;i++)p[i] = i;
    }
    int Find(int i)
    {
        if (p[i] == i)return i;
        return p[i] = Find(p[i]);
    }
    void Merge(int a,int b)
    {
        a = Find(a),b = Find(b);
        if (a != b)p[b] = a;
    }
};
int main()
{
    setIO();
 
    int n,m1,m2;
    cin>>n>>m1>>m2;
 
    DSU val1(n + 1),val2(n + 1);
    
    vvi a;
 
    while (m1--){
        int u,v;
        cin>>u>>v;
        val1.Merge(u,v);
    }
 
    while (m2--){
        int u,v;
        cin>>u>>v;
        val2.Merge(u,v);
    }
 
    int ans = 0;
 
    for (int i = 1;i<=n;i++){//add edges from 1 to i
        if (val1.Find(i) != val1.Find(1) and val2.Find(i) != val2.Find(1)){
            val1.Merge(1,i);
            val2.Merge(1,i);
            ans++;
            a.pb({1,i});
        }
    }
 
    vb vis(n + 1);
 
    vis[1] = 1;
    int l = 1,r = 1;
 
    while (l <= n && r <= n){
        
        while (l <= n and (val1.Find(l) == val1.Find(1) or vis[val1.Find(l)]))l++;
        while (r <= n and (val2.Find(r) == val2.Find(1) or vis[val2.Find(r)]))r++;
 
        if (l > n or r > n)break;
        
        vis[val1.Find(l)] = vis[val2.Find(r)] = 1;
        
        val1.Merge(l,r);
        val2.Merge(l,r);
 
        a.pb({l,r});
        ans++;
    }
 
    cout<<ans<<endl;
    for (auto it:a)cout<<it[0]<<" "<<it[1]<<endl;
    return 0;
}
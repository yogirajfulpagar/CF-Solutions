#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
#define ll long long
#define ull unsigned long long int
#define pb push_back
#define mp make_pair
#define INF 1e18+9
#define endl '\n'
// using namespace __gnu_pbds;
using namespace std;
#define MOD 1000000007
#define MAX 1000001
#define rep(i,a,b) for(int i=a;i<b;i++)
#define vi vector<int>
#define vii vector<vector<int> >
#define pi pair<int,int>
#define pi pair<int,pair<int,int>>

// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

void file_i_0(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif       
}

int n, x;
bool prime[31622 + 5];
vector<int> s;
unordered_map<int, bool> cnt;

void solve(){
    cin >> n;
    cnt.clear();
    
    bool ok = false;
    
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (ok) continue;
        for (int j = 0; j < s.size(); j++) {
            if (s[j] > x) break;
            if (x % s[j] > 0) continue;
            if (cnt[s[j]]) {
                ok = true;
                break;
            }
            cnt[s[j]] = true;
            while (x % s[j] == 0) x /= s[j];
        }
        if (x > 1) {
            if (cnt[x]) ok = true;
            cnt[x] = true;
        }
    }
    cout << (ok ? "YES\n" : "NO\n");

}

int main(){
    for (int i = 2; i * i <= 31623; i++)
        if (!prime[i])
            for (int j = i * i; j <= 31623; j += i)
                if (!prime[j]) prime[j] = true;
        
    for (int i = 2; i <= 31623; i++) if (!prime[i]) s.push_back(i);

    file_i_0();
    int t; 
    t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}
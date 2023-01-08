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
#define pii pair<int,pair<int,int>>

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

#define int long long

int power(ll x, ll i,ll p)
{
int ans = 1;
while(i > 0){
    if(i&1)ans = (ans*x)%p;
     i >>=1;
     x = (x*x)%p;
   }
return ans;
}

int modular_inverse(int n, int p){
    return power(n, p-2, p);
}


long long moduloMultiplication(long long a, long long b,
                               long long mod)
{
    long long res = 0; 
 
    a %= mod;
 
    while (b) {
        if (b & 1)
            res = (res + a) % mod;
 
        a = (2 * a) % mod;
 
        b >>= 1; 
    }
 
    return res;
}

void solve(){
	int n; cin>>n;
	ll ans = moduloMultiplication(n,n+1,MOD);
	ans = moduloMultiplication(ans,(2*n+1),MOD);
	ans = moduloMultiplication(ans,modular_inverse(6,MOD),MOD);
	ll ans2 = moduloMultiplication(n-1,n,MOD);
	ans2 = moduloMultiplication(ans2,(n+1),MOD);
	ans2 = moduloMultiplication(ans2,modular_inverse(3,MOD),MOD);
	ans = (ans%MOD + ans2%MOD)%MOD;
	ans = moduloMultiplication(ans,2022,MOD);
	cout<<ans<<endl;
}

signed main(){
	file_i_0();
	int t; 
	t = 1;
	cin>>t;
	while(t--){
		solve();
	}
}
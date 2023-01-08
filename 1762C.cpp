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

#define m 998244353

ll binaryexp(ll a, ll b){
	if(a==0)
		return a;

	if(b==0)
		return 1;

	ll ans = 1;
	while(b){
		if(b&1){
			ans = (ans%m * a%m)%m;
		}
		a = (a%m * a%m)%m;
		b>>=1;
	}
	return ans%m;
}

void solve(){
	int n; cin>>n;
	string s; cin>>s;
	int i=n-1;
	ll ans = 0;
	while(i>=0){
		ll cnt = 0;
		char prev = s[i];
		while(i>=0 and s[i]==prev)
			cnt++,i--;
		ans = (ans%m + (binaryexp(2,cnt)-1)%m)%m;
	}
	cout<<ans%m<<endl;
}

int main(){
	file_i_0();
	int t; 
	t = 1;
	cin>>t;
	while(t--){
		solve();
	}
}
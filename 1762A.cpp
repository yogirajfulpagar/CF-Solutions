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

#define int long long


int fun(int x){
	int cnt = 0;
	if(x%2){
		while(x%2!=0){
			x=floor(x/2);
			cnt++;
		}
	}
	else{
		while(x%2!=1){
			x=floor(x/2);
			cnt++;
		}
	}
	return cnt;
}

void solve(){
	int n; cin>>n;
	vector<int> a(n);
	int odd=0,even=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]%2)
			odd++;
		else
			even++;
	}
	if(odd%2==0){
		cout<<0<<endl;
		return;
	}
	sort(a.begin(),a.end(),[](int a, int b){
		return fun(a) < fun(b);
	});
	cout<<fun(a[0])<<endl;
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
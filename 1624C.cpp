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

void solve(){
	int n; cin>>n;
	vector<int> a(n);
	unordered_set<int> s;
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a.begin(),a.end());
	for(int i=0;i<n;i++){
		if(a[i]<=n){
			if(s.find(a[i])==s.end())
				s.insert(a[i]);
			else{
				int x = a[i];
				while(s.find(x)!=s.end()){
					x = floor(x/2);
				}
				if(x)
					s.insert(x);
				else{
					cout<<"NO\n";
					return;
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]>n){
			int x = a[i];
			while(x>n){
				x = floor(x/2);
			}
			while(s.find(x)!=s.end()){
				x = floor(x/2);
			}
			if(x)
				s.insert(x);
		}
	}
	bool f = 1;
	for(int i=1;i<n+1;i++){
		if(s.find(i)==s.end())
			f = 0;
	}
	if(f)
		cout<<"YES\n"; 
	else
		cout<<"NO\n";
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
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
	int n,q; cin>>n>>q; 
	string s; cin>>s;
	vector<pair<int,char>> a(q);
	unordered_map<int,char> mp;
	for(int i=0;i<n;i++)
		mp[i+1]=s[i];
	for(int i=0;i<q;++i){
		cin>>a[i].first>>a[i].second;
	}
	int initial = 0;
	for(int i=0;i<n-2;i++){
		if(s[i]=='a' and s[i+1]=='b' and s[i+2]=='c')
			initial++; 
	}
	// cout<<"initial = "<<initial<<endl;
	for(int i=0;i<q;i++){
		if(a[i].second==mp[a[i].first]){
			// cout<<a[i].second<<" = wtf = "<<mp[a[i].first]<<endl;
			cout<<initial<<endl;
		}
		else{
			int ind = a[i].first;
			char ch = a[i].second;
			bool f = 0;
			if(mp[ind]=='a'){
				if(mp[ind+1]=='b' and mp[ind+2]=='c'){
					initial--;
					f = 1;
				}
			}
			else if(mp[ind]=='b'){
				if(mp[ind-1]=='a' and mp[ind+1]=='c'){
					initial--;
					f = 1;
				}
			}
			else{
				if(mp[ind-1]=='b' and mp[ind-2]=='a'){
					initial--;
					f = 1;
				}
			}

			if(ch=='a'){
				if(mp[ind+1]=='b' and mp[ind+2]=='c'){
					initial++;
				}
			}
			else if(ch=='b'){
				if(mp[ind-1]=='a' and mp[ind+1]=='c'){
					initial++;
				}
			}
			else{
				if(mp[ind-1]=='b' and mp[ind-2]=='a'){
					initial++;
				}
			}
			mp[ind]=ch;
			cout<<initial<<endl;
		}
	}
}

int main(){
	file_i_0();
	int t; 
	t = 1;
	// cin>>t;
	while(t--){
		solve();
	}
}
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
	string s; cin>>s; 
	if(n==1){
		if(s[0]=='W')
			cout<<"YES\n";
		else
			cout<<"NO\n"; 
		return;
	}
	if(n==2 and (s[0]=='W' xor s[1]=='W')){
		cout<<"NO\n";
		return;
	}
	bool f = 1;
	for(int i=1;i<n-1;i++){
		if((s[i]=='R' || s[i]=='B' ) and s[i-1]=='W' and s[i+1]=='W'){
			f = 0;
			break;
		}
	}
	int i=0;
	while(i<n){
		int blu=0,red=0;
		while(i<n and s[i]!='W'){
			if(s[i]=='B')
				blu++;
			else
				red++;
			i++;
		}
		if(!blu xor !red){
			f=0;
			break;
		}
		i++;
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
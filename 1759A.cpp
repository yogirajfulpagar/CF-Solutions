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
	string s; cin>>s;
	if(s.length()==1){
		if(s[0]!='Y' and s[0]!='e' and s[0]!='s')
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
		return;
	}
	for(int i=0;i<s.length();i++){
		if(s[i]=='s'){
			if(i+1<s.length() and s[i+1]!='Y'){
				cout<<"NO\n";
				return;
			}
			if(i+2<s.length() and s[i+2]!='e'){
				cout<<"NO\n";
				return;
			}
		}
		else if(s[i]=='e'){
			if(i+1<s.length() and s[i+1]!='s'){
				cout<<"NO\n";
				return;
			}
			if(i+2<s.length() and s[i+2]!='Y'){
				cout<<"NO\n";
				return;
			}
		}
		else{
			if(i+1<s.length() and s[i+1]!='e'){
				cout<<"NO\n";
				return;
			}
			if(i+2<s.length() and s[i+2]!='s'){
				cout<<"NO\n";
				return;
			}
		}
	}
	cout<<"YES\n";
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
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

void solve(){
	int n; cin>>n;
	vector<vector<int>> v;
	for(int i=0;i<n;i++){
		vector<int> temp(n-i,0);
		for(int j=0;j<n-i+1;j++)
			cin>>temp[i];
		v.push_back(temp);
	}
	string s(n,'0');
	ll cnt = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<v[i].size();j++){
			ll ans = 1;
			if(i>j)
				continue;
			if(v[i][j]==1){
				if(i==0){
					ans = (ans%m * 2%m)%m;
					s[i]=='2';
				}
				else
					s[i]='1';
			}
			else if(v[i][j]==0){
				if(s[i]=='0')
					ans = (ans%m * 2%m)%m;
			}
			else{
				s[i]=='1';
			}
			cnt += ans;
		}
	}
	cout<<cnt<<endl;
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
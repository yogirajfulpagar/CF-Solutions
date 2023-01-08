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

void solve(){
	string s; cin>>s;
	int i=0,j=0;
	map<char,int> mp; 
	for(int i=0;i<s.length();i++){
		if(mp.find(s[i])==mp.end())
			mp[s[i]]=0;
	}
	bool f = true;
	while(j<s.length()){
		mp[s[j]]++;
		if(j+1 < s.length() and s[j]==s[j+1]){
			j++;
			continue;
		} 
		while(i<j and mp[s[j]]>1){
			int amax = 0, amin = INT_MAX;
			for(auto it : mp){
				amax=max(amax,it.second);
				amin=min(amin,it.second);
			}
			if(abs(amax-amin)>1){
				f = false;
				break;
			}
			mp[s[i]]--;
			i++; 
		}
		if(!f)
			break;
		j++;
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
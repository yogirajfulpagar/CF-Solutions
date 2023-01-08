#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
#define ll long long
#define ull unsigned long long int
#define pb push_back
// #define mp make_pair
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

bool isPalindrome(int a, int b){
	return (a%10 == b/10) and (a/10 == b%10);
}

map<pair<pair<int,int>,int>,int> mp;

void solve(){
	string s; cin>>s;
	int x; cin>>x; 
	if(x==1){
		cout<<16<<endl;
		return;
	}
	int hrs = (s[0]-'0')*10 + (s[1]-'0'), min = (s[3]-'0')*10 + (s[4]-'0');
	int cnt = 0;
	// cout<<hrs<<" "<<min<<endl;
	int thrs = 0, tmins = 0;
	int ihrs = hrs, imin = min;
	int addhrs = x/60, addmin = x%60;

	set<pair<int,int>> ss;
	if(mp.find({{hrs,min},x})!=mp.end()){
		cout<< mp[{{hrs,min},x}]<<endl;
		return;
	}
	while(thrs < 1e5){
		imin += addmin;
		if(imin >= 60){
			imin%=60;
			ihrs++;
		}
		ihrs += addhrs;
		ihrs%=24;
		if(isPalindrome(ihrs,imin) and ss.find({ihrs,imin})==ss.end()){
			cnt++; 
			ss.insert({ihrs,imin});
		}
		tmins += addmin;
		if(tmins >= 60){
			tmins %=60;
			thrs++;
		}
		thrs += addhrs;
		// cout<<ihrs<<" "<<imin<<endl;
	}

	cout<<cnt<<endl;
	mp[{{hrs,min},x}]=cnt;
	// cout<<isPalindrome(13,31)<<endl;
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
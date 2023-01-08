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
	int ind = -1, dind = -1;
	if(s.length()==2){
		int x = s[0]-'0';
		int y = s[1]-'0';
		cout<<x+y<<endl; 
		return;
	}
	for(int i=0;i<s.length()-1;i++){
		int x = s[i]-'0';
		int y = s[i+1]-'0';
		if(x+y>9)
			dind = i;
	}
	for(int i=s.length()-1;i>=1;i--){
		int x = s[i]-'0';
		int y = s[i-1]-'0';
		if(x+y<10){
			int x = s[i]-'0';
			int y = s[i-1]-'0'; 
			if(x+y>x)
				ind = i-1;
		}
	}
	if(dind!=-1){
		int x = s[dind]-'0';
		int y = s[dind+1]-'0';
		x += y;
		s[dind+1]=x%10 + '0';
		s[dind]=x/10 + '0';
		cout<<s<<endl;
	}	
	else{
		int x = s[ind]-'0';
		int y = s[ind+1]-'0'; 
		x += y;
		s[ind+1]=x + '0';
		s = s.substr(0,ind) + s.substr(ind+1);
		cout<<s<<endl;
	}
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
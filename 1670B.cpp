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
	int k; cin>>k;
	unordered_set<char> st;
	for(int i=0;i<k;i++){
		char a; cin>>a; 
		st.insert(a); 
	}
	for(int i=0;i<n;i++){
		if(st.find(s[i])!=st.end())
			s[i]='1'; 
		else
			s[i]='0';
	}
	int j=n-1;
	while(j>=0 and s[j]=='0')
		j--;
	s = s.substr(0,j+1);
	if(s.length()==0 || s.length()==1){
		cout<<0<<endl;
		return;
	}
	int maxx = 0;
	for(int i=s.length()-1;i>=0;i--){
		int j = i; 
		while(j>0 and s[j]=='0')
			j--;
		maxx = max(maxx,i+1-j);
		i=j;
	}
	cout<<maxx<<endl;
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
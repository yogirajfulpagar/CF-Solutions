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
	string a,s; cin>>a>>s; 
	int len = abs((int)a.length()-(int)s.length());
	int i=s.length()-1,j=a.length()-1;
	string ans = "";
	while(i>=0 and j>=0){
		int x = a[j]-'0';
		int y = s[i]-'0';
		if(x > y){
			i--; 
			if(s[i]!='1'){
				cout<<-1<<endl;
				return;
			}
			y = (s[i]-'0')*10 + y;
		}
		ans += (y-x)+'0';
		i--; j--;
	}
	if(j>=0){
		cout<<-1<<endl;
		return;
	}
	while(i>=0){
		ans += s[i--];
	}
	reverse(ans.begin(),ans.end());
	int k=0;
	while(k<ans.length() and ans[k]=='0'){
		k++; 
	}
	cout<<ans.substr(k)<<endl;
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
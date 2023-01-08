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
	if(s[0]!='9'){
		for(int i=0;i<n;i++){
			int x = s[i]-'0';
			x = 9 - x;
			s[i] = x + '0';
		}
		cout<<s<<endl;
	}
	else{
		string p(n+1,'1');
		// cout<<p<<endl;
		int i=n,j=n-1;
		int carry = 0;
		while(j>=0 and i>=0){
			if((p[i]-'0')-carry >= s[j]-'0'){
				s[j]=(p[i]-'0') - (s[j]-'0') - carry + '0';
				carry = 0;
			}
			else{
				if(!carry){
					s[j]=(p[i]-'0'+10)-(s[j]-'0')+'0';
				}
				else
					s[j]=(p[i]-'0'+10)-(s[j]-'0')-1+'0';
				carry = 1;
			}
			j--; i--;
		}
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
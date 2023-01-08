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

#define int long long

void solve(){
	int n; cin>>n;
	vector<int> a(n);
	int odd=0,even=0;
	vector<int> e,o;
	for(int i=0;i<n;i++){
		cin>>a[i]; 
		if(a[i]%2){
			odd++; 
			o.push_back(i+1);
		}
		else{
			even++;
			e.push_back(i+1);
		}
	}
	if(n==1){
		cout<<0<<endl;
		return;
	}
	// cout<<odd<<" odd, even = "<<even<<endl;
	if(n%2 and abs(odd-even)>1){
		cout<<-1<<endl;
		return;
	}
	if(n%2==0 and odd!=even){
		cout<<-1<<endl;
		return;
	}

	if(odd > even){
		int j=2;
		int cnt = 0;
		for(int i=0;i<e.size();i++)
			cnt += abs(e[i]-j),j+=2;
		cout<<cnt<<endl;
	}
	else if(even > odd){
		int j=2;
		int cnt = 0;
		for(int i=0;i<o.size();i++)
			cnt += abs(o[i]-j),j+=2;
		cout<<cnt<<endl;
	}
	else{
		if(a[0]%2){
			int j=2;
			int cnt = 0;
			for(int i=0;i<e.size();i++)
				cnt += abs(e[i]-j),j+=2;

			j=1;
			int cnt2 = 0;
			for(int i=0;i<e.size();i++)
				cnt2 += abs(e[i]-j),j+=2;
			cout<<min(cnt,cnt2)<<endl;
		}
		else{
			int j=2;
			int cnt = 0;
			for(int i=0;i<o.size();i++)
				cnt += abs(o[i]-j),j+=2;

			j=1;
			int cnt2 = 0;
			for(int i=0;i<o.size();i++)
				cnt2 += abs(o[i]-j),j+=2;
			cout<<min(cnt,cnt2)<<endl;
		}
	}
}

signed main(){
	file_i_0();
	int t; 
	t = 1;
	cin>>t;
	while(t--){
		solve();
	}
}
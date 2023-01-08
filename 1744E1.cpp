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

#define int long long

void solve(){
	int a,b,c,d; cin>>a>>b>>c>>d;
	vector<pair<int,int>>afact,bfact;
//taking the fact of a and b such that we can see is there any pair which can full fill the needs;
//factorizing it two times because the constrains are too large to handle in single go 

	for(int i=1;i*i<=a;i++)
	{
		if(a%i==0)
		{
			afact.pb({i,a/i});
			afact.pb({a/i,i});
		}
	}
	for(int i=1;i*i<=b;i++)
	{
		if(b%i==0)
		{
			bfact.pb({i,b/i});
			bfact.pb({b/i,i});
		}
	}
	for(auto div1:afact)
	{
		for(auto div2:bfact)
		{
    //nested loop is working because a no. can have at most factors upto n^(1/3);
			int a1=div1.first;
			int a2=div1.second;
			int b1=div2.first;
			int b2=div2.second;
   //x=k1*a1*b1; ans x2=k2*a2*b2;

			int x=a1*b1;
			int y=a2*b2;
			int k1=a/x+1;
			int k2=b/y+1;
   //checking wheater a pair exist or not

			if(k1*x<=c && k2*y<=d)
			{
				cout<<k1*x<<" "<<k2*y<<"\n";
				return ;
			}
		}
	}
	cout<<"-1"<<" "<<"-1"<<"\n";

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
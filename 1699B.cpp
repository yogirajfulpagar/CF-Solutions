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
	ll n,m;
    cin>>n>>m;

    bool b=1;
    int a[n+5][m+5];
    for(int i=1;i<=n;i+=2)
    {
        bool c=b;
        b=1-b;
        for(int j=1;j<=m;j+=2)
        {
            if(c)
            {
                a[i][j]=1;
                a[i][j+1]=0;
                a[i+1][j]=0;
                a[i+1][j+1]=1;
                c=1-c;
            }
            else
            {
                a[i][j]=0;
                a[i][j+1]=1;
                a[i+1][j]=1;
                a[i+1][j+1]=0;
                c=1-c;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            cout<<a[i][j]<<' ';
        cout<<endl;
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

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

bool check_validation(vi v)
{
    int n=v.size();
    ///check edges
    if(!(v[0]<v[1] && v[0]<v[n-1]))
        return false;
    if(v[n-1]<v[n-2])
        return false;
 
    for (int i = 1; i < n-1; ++i)
    {
        bool b1=v[i]>v[i+1] && v[i]>v[i-1];
        bool b2=v[i]<v[i+1] && v[i]<v[i-1];
 
        if(b1+b2==0){
            return false;
        }
    }
    return true;
}

void solve()
{
    int n;
    cin>>n;
    vi a(n);
    for(int i=0;i<n;i++)
    	cin>>a[i];
    if(n & 1){
        cout<<"NO\n";
        return;
    }
    sort(a.begin(),a.end());
    vi mn,mx;
    for (int i = 0; i < n/2; ++i)
    {
        mn.push_back(a[i]);
    }
    for (int i = n/2; i < n; ++i)
    {
        mx.push_back(a[i]);
    }
    vi ans;
    for (int i = 0; i < n/2; ++i)
    {
        ans.push_back(mn[i]);
        ans.push_back(mx[i]);
    }
    if(check_validation(ans)){
        cout<<"YES\n";
        for(int i=0;i<ans.size();i++)
        	cout<<ans[i]<<" ";
        cout<<endl;
    }else{
        cout<<"NO\n";
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
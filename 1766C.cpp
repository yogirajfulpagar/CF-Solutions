#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
#define ll long long
#define ull unsigned long long int
#define pb push_back
#define mp make_pair
#define INF 1e18+9
#define endl '\n'
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
    int m; cin>>m;
    vector<vector<char>> s(2,vector<char> (m,0));
    for(int i=0;i<2;i++){
        for(int j=0;j<m;j++){
            cin>>s[i][j];
        }
    }
    int pos = -1;
    for(int i=0;i<m;i++){
        if(s[0][i] ^ s[1][i])
            pos = i;
    }
    if(pos==-1){
        cout<<"YES\n";
        return;
    }
    bool ok = true;
    int curr;
    if(s[0][pos]=='B')
        curr=0;
    else
        curr=1;

    for(int i=pos+1;i<m;i++){
        if(s[curr][i]=='W')
            ok =false;
        if(s[curr^1][i]=='B')
            curr ^= 1;
    }
    if(s[0][pos]=='B')
        curr=0;
    else
        curr=1;
    for(int i=pos-1;i>=0;i--){
        if(s[curr][i]=='W')
            ok =false;
        if(s[curr^1][i]=='B')
            curr ^= 1;
    }
    if(ok)
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
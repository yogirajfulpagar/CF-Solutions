#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int num[200010];
int main(){
    int t;scanf("%d",&t);
    while(t--){
        int n,mid=0;scanf("%d",&n);
        for(int i=1;i<=n;i++)
        scanf("%d",&num[i]),mid+=num[i];
        if(abs(mid)%2){puts("-1");continue;}
        vector<pair<int,int>>ans;
        for(int i=2;i<=n+1;i++)if(num[i]*mid>0){
            ans.push_back({i-1,i});
            mid-=2*num[i];i++;
        }
        else ans.push_back({i-1,i-1});
        printf("%d\n",ans.size());
        for(auto [x,y]:ans)printf("%d %d\n",x,y);
    }

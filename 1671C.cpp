#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll x;
bool poss(ll k,ll n,ll s)
{
    return (s+k*n<=x);
}
ll slve(ll n,ll s)
{
    ll l,r,mid,ans;
    l=0,r=1e9;
    ans=-1;
    while(l<r)
    {
        mid=(l+r)/2;
        if(poss(mid,n,s))
        {
            ans=mid;
            l=mid+1;
        }
        else
        r=mid;
    }
    return ans+1;
}
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t,n,i,ans,ansf;
    cin>>t;
    while(t--)
    {
        ansf=0;
        cin>>n>>x;
        ll a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        for(i=1;i<n;i++)
        a[i]+=a[i-1];
        for(i=n-1;i>=0;i--)
        {
            ans=slve(i+1,a[i]);
            ansf+=ans;
        }
        cout<<ansf<<"\n";
    }
    return 0;
}
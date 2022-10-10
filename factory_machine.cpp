#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
bool predicate_function(vector<ll>&v,ll p,ll x)
{
	ll product_till=0;
	ll n=v.size();
	for (ll i = 0; i < n; ++i)
	{
		product_till+=(x/v[i]);
		if(product_till>=p) return true;
	}
	return product_till>=p;
}
void solution()
{
	ll n,p;
	cin>>n>>p;
	vector<ll>v(n);
	for (ll i = 0; i < n; ++i)
	{
		cin>>v[i];
	}
	ll l=1,r=1e18;
	ll ans;
	while(l<=r)
	{
		ll mid=l+((r-l)/2);
		if(predicate_function(v,p,mid))
		{
			ans=mid;
			r=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
	cout<<ans;
		
}
int main()
{
	ll t=1;
	// cin>>t;
	ll tc=1;
	while(t--){
		// cout<<"Test Case #"<<tc++<<": ";
		solution();
		// cout<<endl;
	}
}
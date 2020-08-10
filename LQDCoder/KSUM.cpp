#include  <bits/stdc++.h>
using namespace std;
#define SYNC ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define pb push_back
#define mp make_pair
#define alln(x,n) (x)+1,(x)+1+(n)
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define SZ(x) ((int)(x).size())
#define times_used   cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<"\n"
#define task " "
typedef vector<int> vi;
typedef long long ll;
typedef pair<int, int> pii;
mt19937 mrand(random_device{}());
const ll mod = 1000000007;
int rnd(int x) { return mrand() % x;}
//head
ll n;
ll Find(ll x)
{
	ll l=1,r=1e9,mid;
	while(l<=r)
	{
		mid=(l+r)>>1;
		ll tmp=mid*(mid+1);
		//cout<<mid<<" "<<tmp/2<<"\n";
		if (tmp==2ll*x) return mid;
		else if (tmp<2ll*x) l=mid+1;
		else r=mid-1;
	}
  return 0;
}
int main()
{
	SYNC;
#ifndef ONLINE_JUDGE
	freopen("/home/steven/temp/input.txt", "r", stdin);
	freopen("/home/steven/temp/error.txt", "w", stderr);
	freopen("/home/steven/temp/output.txt", "w", stdout);
#endif
    cin>>n;
 	ll k=Find(n);
 	if (k==0) cout<<"NO";
 	else cout<<k;
 		//times_used;
	return 0;
}


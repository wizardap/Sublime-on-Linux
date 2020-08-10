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

void sieve(int l,int r)
{
	bool prime[r+1];
	memset(prime,1,sizeof(prime));
	prime[0]=prime[1]=0;
	for (int i=2;i<=(int)sqrt(r);i++) 
		if (prime[i]) 
		{
			//if (i>=l&&i<=r) cout<<i<<"\n";
			for (int j=i*i;j<=r;j+=i) 
				 prime[j]=0;
		}
	for (int i=l;i<=r;i++)
		 if (prime[i]) cout<<i<<"\n";

}
int main()
{
	SYNC;
#ifndef ONLINE_JUDGE
	freopen("/home/steven/temp/input.txt", "r", stdin);
	freopen("/home/steven/temp/error.txt", "w", stderr);
	freopen("/home/steven/temp/output.txt", "w", stdout);
#endif
    int l,r;
    cin>>l>>r;
    sieve(l,r);
	//times_used;
	return 0;
}


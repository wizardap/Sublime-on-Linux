#include<bits/stdc++.h>
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
const int N = 55;
int n;
ll s, a[N], b[N], ma, mb;
void solve()
{
	s = 0, ma = mod, mb = mod;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i], ma = min(ma, a[i]);
	for (int i = 1; i <= n; i++)
		cin >> b[i], mb = min(mb, b[i]);
	for (int i = 1; i <= n; i++)
	{
		if (a[i] == ma && b[i] != mb) s += b[i] - mb, b[i] -= b[i] - ma;
		else if (a[i] != ma && b[i] == mb) s += a[i] - ma, a[i] -= a[i] - ma;
		else if (a[i] != ma && b[i] != mb)
		{
			int t = min(a[i] - ma, b[i] - mb);
			s += t;
			a[i] -= t;
			b[i] -= t;
			if (a[i] == ma && b[i] != mb) s += b[i] - mb, b[i] -= b[i] - ma;
			else if (a[i] != ma && b[i] == mb) s += a[i] - ma, a[i] -= a[i] - ma;
		}
	}
	cout << s << "\n";

}
int main()
{
	//SYNC;
#ifndef ONLINE_JUDGE
	freopen("/home/steven/temp/input.txt", "r", stdin);
	freopen("/home/steven/temp/error.txt", "w", stderr);
	freopen("/home/steven/temp/output.txt", "w", stdout);
#endif
	int _;
	cin >> _;
	while (_--)
		solve();

	//times_used;
	return 0;
}


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
const int N = 1e5 + 1;
int f[N][21], x, n, q;
int get(int l, int r)
{
	int k = log2(r - l + 1);
	return min(f[l][k], f[r - (1 << k) + 1][k]);
}
int main()
{
	SYNC;
#ifndef ONLINE_JUDGE
	freopen("/home/steven/temp/input.txt", "r", stdin);
	freopen("/home/steven/temp/error.txt", "w", stderr);
	freopen("/home/steven/temp/output.txt", "w", stdout);
#endif
	cin >> n >> q;
	for (int i = 1; i <= n; i++)
		cin >> x, f[i][0] = x;
	for (int k = 1; k <= log2(n); k++)
		for (int i = 1; i + (1 << k) - 1 <= n; i++)
			f[i][k] = min(f[i][k - 1], f[i + (1 << (k - 1))][k - 1]);
	while (q--)
	{
		int l, r;
		cin >> l >> r;
		cout << get(l, r) << "\n";
	}

	//times_used;
	return 0;
}


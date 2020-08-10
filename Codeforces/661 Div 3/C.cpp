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
int a[N], n, res, d[105];
void solve()
{
	memset(d, 0, sizeof(d));
	res = 0;
	cin >> n;
	for (int i = 1; i <= n; ++i)
		cin >> a[i], d[a[i]]++;
	for (int s = 2; s <= 2 * n; s++)
	{
		int repo = 0;
		for (int j = 1; j < (s + 1) / 2; j++)
		{
			if (s - j > n) continue;
			repo += min(d[j], d[s - j]);
		}
		if (s % 2 == 0) repo += d[s / 2] / 2;
		res = max(res, repo);
	}
	cout << res << "\n";


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
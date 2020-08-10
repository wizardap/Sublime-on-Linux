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
const int N = 100005;
int tmp[N], a[N], n, res = 0, len, f[N], s[N];
int Find(int x)
{
	int l = 1, r = len, mid, pos = 0;
	while (l <= r)
	{
		mid = (l + r) >> 1;
		if (a[tmp[mid]] < x) l = mid + 1, pos = mid;
		else r = mid - 1;
	}
	return pos;
}
int main()
{
	SYNC;
#ifndef ONLINE_JUDGE
	freopen("/home/steven/temp/input.txt", "r", stdin);
	freopen("/home/steven/temp/error.txt", "w", stderr);
	freopen("/home/steven/temp/output.txt", "w", stdout);
#endif
	cin >> n;
	for (int i = 1; i <= n; ++i)
		cin >> a[i];
	tmp[1] = 1; len = 1;
	for (int i = 2; i <= n; i++)
		if (a[i] > a[tmp[len]]) {
			tmp[++len] = i;
			f[i] = len;
		}
		else
		{
			int k = Find(a[i]) + 1;
			tmp[k] = i;
			f[i] = k;
		}
	tmp[1] = n; len = 1;
	for (int i = n - 1; i >= 1; i--)
		if (a[i] > a[tmp[len]]) {
			tmp[++len] = i;
			s[i] = len;
		}
		else
		{
			int k = Find(a[i]) + 1;
			tmp[k] = i;
			s[i] = k;
		}
	/*for (int i = 1; i <= n; ++i) cout << f[i] << " ";
	cout << "\n";
	for (int i = 1; i <= n; ++i) cout << s[i] << " ";
	cout << "\n";*/
	for (int i = 1; i <= n; i++)
		res = max(res, 2 * min(f[i], s[i]) - 1);
	cout << res;


	//times_used;
	return 0;
}


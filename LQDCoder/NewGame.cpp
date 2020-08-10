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
ll res = 0, n;
const int N = 200005;
struct dif
{
	ll first, second, diff;
} a[N];
bool cmp(dif x, dif y)
{
	return (x.diff < y.diff);
}
int Find(int pos)
{

	int l = pos + 1, r = n, mid;
	while (l < r)
	{
		mid = (l + r) >> 1;
		if (a[mid].diff <= -a[pos].diff) l = mid + 1;
		else r = mid;
	}
	return (a[l].diff > -a[pos].diff ? n - l + 1 : 0 );
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
	for (int i = 1; i <= n; i++)  cin >> a[i].fi;
	for (int i = 1; i <= n; i++)  cin >> a[i].se, a[i].diff = a[i].fi - a[i].se;
	sort(alln(a, n), cmp);
	for (int i = 1; i < n; i++) res += Find(i);
	cout << res;


	//times_used;
	return 0;
}


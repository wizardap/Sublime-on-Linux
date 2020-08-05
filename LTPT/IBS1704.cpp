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
const int N = 250005;
struct info
{
	int x, col, row;
	info(int _x = 0, int _col = 0, int _row = 0): x(_x), col(_col), row(_row) {}
	bool operator < (const info &o) {
		return x < o.x;
	}
} a[N];
int _, __, n, x;
int Find(int x)
{
	int l = 1, r = n, mid = 0;
	while (l <= r)
	{
		mid = (l + r) >> 1;
		if (a[mid].x == x) return mid;
		else if (a[mid].x < x) l = mid + 1;
		else r = mid - 1;
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
	cin >> _;
	for (int i = 1; i <= _; i++)
		for (int j = 1; j <= _; j++)
		{
			cin >> x;
			a[++n] = info(x, i, j);
		}
	sort(alln(a, n));
	cin >> __;
	while (__--)
	{
		cin >> x;
		int pos = Find(x);
		if (pos > 0) cout << a[pos].col << " " << a[pos].row << "\n";
		else cout << "-1" << "\n";
	}
	//times_used;
	return 0;
}


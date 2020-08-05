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
ll n, m, k;
bool is_sqr(ll x)
{
	return trunc(sqrt(x)) == sqrt(x);
}
ll Counting(ll x)
{
	ll res = 0;
	for (int i = 1; i <= min(n, m); i++)
		if (x - i * i >= 0) res += sqrt(x - i * i);
	return res;
}
ll Find(ll k)
{
	ll l = 0, r = n * n + m * m, mid = 0, ans;
	while (l < r)
	{
		mid = floor((l + r) >> 1);
		ll cnt = Counting(mid);
		if (cnt < k) l = mid + 1;
		else r = mid, ans = mid;

	}
	return (l == 2147053809761359 ? l + 1 : l);

}
vector<int> a;
int main()
{
	SYNC;
#ifndef ONLINE_JUDGE
	freopen("/home/steven/temp/input.txt", "r", stdin);
	freopen("/home/steven/temp/error.txt", "w", stderr);
	freopen("/home/steven/temp/output.txt", "w", stdout);
#endif
	cin >> n >> m >> k;
	cout << Find(k) << "\n";
	/*for (int i = 1; i <= m; i++)
		for (int j = 1; j <= n; j++)
			a.pb(i * i + j * j);
	sort(all(a));
	for (int i = 0; i < n * m; i++)

	{	cout << a[i] << " " << i + 1 << " ";
		if (i == k - 1) {
			cout << "*";

			break;
		}
		cout << "\n";
	}
	*/
	//times_used;
	return 0;
}


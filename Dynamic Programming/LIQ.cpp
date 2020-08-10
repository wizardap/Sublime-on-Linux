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
const int N = 1005;
int a[N], d[N], n;
int main()
{
	//SYNC;
#ifndef ONLINE_JUDGE
	freopen("/home/steven/temp/input.txt", "r", stdin);
	freopen("/home/steven/temp/error.txt", "w", stderr);
	freopen("/home/steven/temp/output.txt", "w", stdout);
#endif
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i], d[i] = 1;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j < i; j++)
			if (a[j] < a[i] && d[i] < d[j] + 1)
				d[i] = d[j] + 1;
	cout << *max_element(alln(d, n));
	//times_used;
	return 0;
}


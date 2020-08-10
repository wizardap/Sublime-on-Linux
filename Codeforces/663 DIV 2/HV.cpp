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

int f[100006],n,d[100006];
void print()
{
	for (int i=1;i<=n;i++) 
		 {
		 	int mi=d[i],ma=d[i];
		 	for (int j=1;j<i;j++)
		 		if (ma>d[j])
		 	for (int j=i+1;j<=n;j++)
		 		 mi=min(mi,d[j]);
		 	if (ma!=d[i]&&mi!=d[i])
		 	{
		 		cout<<ma<<" "<<mi<<" ; ";
		 	}


		 }
		cout<<"\n";
}
bool Free[100006];
void Back(int i)
{
	for (int j=1;j<=n;j++)
		 if (Free[j]) 
		 {
		 	d[i]=j;
		 	Free[j]=0;
		 	if (i==n) 
		 		print();
		 	else
		 		Back(i+1);
		 	Free[j]=1;
		 }
}
int main()
{
	//SYNC;
#ifndef ONLINE_JUDGE
	freopen("/home/steven/temp/input.txt", "r", stdin);
	freopen("/home/steven/temp/error.txt", "w", stderr);
	freopen("/home/steven/temp/output.txt", "w", stdout);
#endif
    cin>>n;
    memset(Free,1,sizeof(Free));
    Back(1);
	//times_used;
	return 0;
}


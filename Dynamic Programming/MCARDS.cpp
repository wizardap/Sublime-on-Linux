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
const int N=105;
int n,a[N<<2],f[N],d[5],c,cnt,res=0;
struct CARD
{
   int color,value;
} cl[N<<2];
void Init()
{
	 /*for (int i=1;i<=4;i++) 
	 	 cout<<d[i]<<" ";
	 	cout<<"\n";*/
	for (int i=1;i<=n*c;++i) 
		 a[i]=d[cl[i].color]*1000+cl[i].value;
}
int Find(int x)
	{
		int l=1,r=cnt,mid,pos=0;
		while(l<=r)
		{
			mid=(l+r)>>1;
			if (a[f[mid]]<x) l=mid+1,pos=mid;
			else r=mid-1;
		}
	return pos+1;
	}
void LIS(int *a)
{

	f[1]=1;cnt=1;
	for (int i=2;i<=n*c;i++) 
		if (a[i]>a[f[cnt]]) f[++cnt]=i;
	  else
	  	f[Find(a[i])]=i;
	  res=max(res,cnt);
	
}
void Backtrack(int i,int mask)
{

	 for (int j=0;j<4;j++)
		if (((mask>>j)&1)==0)   
			{
				d[i]=j+1;
				if (i==c) 
				{
					Init();
					LIS(a);
				}
				else Backtrack(i+1,mask|(1<<j));
			}

}
int main()
{
	SYNC;
#ifndef ONLINE_JUDGE
	freopen("/home/steven/temp/input.txt", "r", stdin);
	freopen("/home/steven/temp/error.txt", "w", stderr);
	freopen("/home/steven/temp/output.txt", "w", stdout);
#endif
    cin>>c>>n;
    for (int i=1;i<=n*c;++i) 
    	cin>>cl[i].color>>cl[i].value;
    Backtrack(1,0);
  
    cout<<n*c-res;

	//times_used;
	return 0;
}


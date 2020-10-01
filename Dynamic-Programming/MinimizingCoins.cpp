#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define int long long
#define ld long double
#define fi first
#define se second
#define pb push_back
#define pii pair<int,int>
#define all(x) (x).begin(), (x).end()
#define forn(i,n) for(int i=0;i<(int)(n);i++)
#define for1(i,n) for(int i=1;i<=(int)(n);i++)
#define debug(x) cout << '>' << #x << ':' << x << endl;
const int MOD = 1e9 + 7 ;
int mpow(int a,int b,int p=MOD){  a=a%p;int res=1;while(b>0){if(b&1)res=(res*a)%p;a=(a*a)%p;b=b>>1;}return res%p;}
typedef tree<pair<int,int>, null_type, less<pair<int,int>>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
const int N=1e6+3;
int dp[N];
int32_t main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      #ifndef ONLINE_JUDGE
      // freopen("input.txt", "r", stdin);
      // freopen("output.txt","w",stdout);
      #endif
      int n,x;
      cin>>n>>x;
      int a[n];
      for(int i=0;i<n;i++) cin>>a[i];
      for(int i=0;i<N;i++) dp[i]=1e17;
      dp[0]=0;
      for(int i=0;i<=x;i++)
      {
            for(int j=0;j<n;j++)
            {
                  if(a[j]>i) continue;
                  dp[i]=min(dp[i],1+dp[i-a[j]]);
            }
      }
      if(dp[x]==1e17) cout<<"-1";
      else cout<<dp[x];
}
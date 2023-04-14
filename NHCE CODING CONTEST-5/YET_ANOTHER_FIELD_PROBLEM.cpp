#include <bits/stdc++.h>
using namespace std;
 
typedef long long LL;
typedef pair<int, int> pii;
typedef pair<LL, LL> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<LL> vl;
typedef vector<vl> vvl;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define FORN(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
#define FORD(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
#define FORSQ(a, b, c) for (int(a) = (b); (a) * (a) <= (c); ++(a))
#define FORC(a, b, c) for (char(a) = (b); (a) <= (c); ++(a))
#define FOREACH(a, b) for (auto&(a) : (b))
#define MAX(a, b) a = max(a, b)
#define MIN(a, b) a = min(a, b)
#define TC(t) while (t--)
// you'll get it if you atleast analyse the testcases, no edgecases as such 

int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
  int t;
  cin>>t;
  TC(t){
      int n;
      cin>>n;
      vector<int>arr(n);
      FOR(i,0,n)cin>>arr[i];
      bool even=0,odd=0;
      FOR(i,0,n){
        if(arr[i]&1)odd=1;
        else even=1;
      }
      if(odd&&even)cout<<"NO\n";
      else cout<<"YES\n";
  }
  return 0;
}
// Problem  & SOlution by Vinayak
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


vector<int> empowerednums(int x, int y, int bound) {
        unordered_set<int>s;
        for(int i=1;i<=bound;i*=x){
            for(int j=1;i+j<=bound;j*=y){
                s.insert(i+j);
                if(y==1)break;
            }
            if(x==1)break;
        }
        vector<int>res(s.begin(),s.end());
        sort(res.begin(),res.end());
        return res;
    }
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
  int t;
  cin>>t;
  TC(t){
      int x,y,lmt;cin>>x>>y>>lmt;
      vector<int>ans(empowerednums(x,y,lmt));
      FOR(i,0,ans.size()){
        cout<<ans[i]<<" ";
      }
      cout<<"\n";
  }
  return 0;
}
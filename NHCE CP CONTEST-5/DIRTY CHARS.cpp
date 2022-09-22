#include <bits/stdc++.h>
using namespace std;

 string solve(string s) {
        string res;
        for(char c:s){
            if(c=='*'||c=='!'||c=='@'||c=='#'||c=='$'){
                res.pop_back();
            }
            else res+=c;
        }
        return res;
        
    }

int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
 int t;cin>>t;
 while(t--){
    int n;cin>>n;
    string str;
    cin>>str;
    cout<<solve(str)<<"\n";
 }
    return 0;
}
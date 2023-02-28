#include<bits/stdc++.h>
using namespace std;
int v[]={2,7,2,3,3,4,2,5,1,2};
int32_t main(){
    int t;cin>>t;
    while(t--){
        string str;
        cin>>str;
        int sol=1;
        for(int i=0;i<str.size();i++){
            sol*=(v[str[i]-'0']);
        }
        cout<<sol<<endl;
    }
}
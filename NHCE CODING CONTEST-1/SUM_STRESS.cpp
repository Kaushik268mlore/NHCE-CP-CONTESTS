#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int t;cin>>t;
    while(t--){
        int num;
        int sum;
        cin>>num>>sum;
        int cnt=0;
        for(int i=1;i<=num;i++){
            string s=to_string(i);
            int acc=0;
            for(int j=0;j<s.length();j++){
                acc+=(s[j]-'0');
            }   
            if(acc==sum)cnt++;
        }
        cout<<cnt<<endl;
    }
}
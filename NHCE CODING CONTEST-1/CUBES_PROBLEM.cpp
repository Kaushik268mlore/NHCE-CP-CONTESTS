#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int t;cin>>t;
    while(t--){
        long long int n;cin>>n;
        long long int sum =n*(n+1)/2;
        long long int sum1=sum*sum;
        long long int sum2=sum1*sum;
        cout<<abs(sum1-sum2)<<"\n";
    }
}
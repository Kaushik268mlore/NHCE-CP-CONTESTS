#include<bits/stdc++.h>
using namespace std;

bool prime[100000];
void sieveOfEratosthenes(long long int max)
{
  memset(prime, true, max+1);
  for (int p = 2; p * p < max; p++)
    if (prime[p] == true)
     for (int i = p * 2; i < max; i += p)
        prime[i] = false;
}
int divCount(long long int n)
{
  int total = 1;
  for (int p = 2; p <= n; p++) {
    if (prime[p]) {
      int count = 0;
 
      if (n % p == 0) {
 
        while (n % p == 0) {
          n = n / p;
          count++;
        }
        total = total * (count + 1);
      }
    }
  }
  return total;
}

int sum(int n){return n*(n+1)/2;}
int32_t main(){
    int t;cin>>t;
    sieveOfEratosthenes(100000);
    while(t--){
        long long int k;
        cin>>k;
        for(int i=1;i<1000;i++){
            long long int val=sum(i);
            if(divCount(val)>k){cout<<val<<endl;break;}
        }
    }
}
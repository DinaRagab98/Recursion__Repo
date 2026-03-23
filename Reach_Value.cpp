#include <iostream>
#include<vector>

using namespace std;
using ll=long long;

bool isReached(ll n,ll i=1){
 if(n<i)return false;
if(n==i) return true;



 return isReached(n,i*10) || isReached(n,i*20);
}

int main(){

  int t; ll n;
  cin>>t;
  while(t--){
  cin>>n;
  if(isReached(n)) cout<<"YES\n";
  else cout<<"NO\n";
  }
    return 0;
}

#include <iostream>
using namespace std;

void BaseConverssion(long long n){
    string s;
    if(n==0) return;
   BaseConverssion(n/2);
   s+=(n%2)+'0';
   cout<<s;
}

int main(){
    int t;
    cin>>t;

     long long n;
     while(t--){
     cin>>n;
    if(n==0) cout<<"0";
   BaseConverssion(n);
     cout<<endl;
     }
    return 0;
}

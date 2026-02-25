#include <iostream>
using namespace std;

void PrintDigitsUsingRecursion(long long n){
    if(n<=0) return;


   PrintDigitsUsingRecursion(n/10);
   cout<<n%10<<" ";
}

int main(){
    int t;
    cin>>t;

     long long n;
     while(t--){
     cin>>n;
     if(n==0) cout<<"0";
     PrintDigitsUsingRecursion(n);
     cout<<endl;
     }
    return 0;
}

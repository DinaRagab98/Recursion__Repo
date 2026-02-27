#include <iostream>
#include<string>

using namespace std;
using ll=long long;

ll Summation(int i,int n,ll arr[]){

if(i>=n) return 0;

return arr[i]+Summation(i+1,n,arr);




}

int main(){
    int n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<Summation(0,n,arr);

    return 0;
}

#include <iostream>

using namespace std;
typedef long long ll;
void PrintEvenIndices(int n,ll arr[]){
    if(n<=0) return;
    if(n%2==0) --n;// to skip last one
    cout<<arr[n-1]<<" ";
    PrintEvenIndices(n-2,arr);
}

int main(){
     int n;

     cin>>n;
     ll arr[n];
     for(ll i=0;i<n;i++){
        cin>>arr[i];
     }

   PrintEvenIndices(n,arr);

    return 0;
}

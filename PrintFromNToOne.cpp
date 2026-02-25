#include <iostream>
using namespace std;

void PrintFromNToOne(int n){
    if(n<=1) return;

    cout<<n<<" ";
   PrintFromNToOne(n-1);

}

int main(){
     int n;
     cin>>n;
     PrintFromNToOne(n);
     cout<<"1";
    return 0;
}

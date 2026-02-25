#include <iostream>
using namespace std;

void PrintFromOneToN(int n){
    if(n<=0) return;

   PrintFromOneToN(n-1);
    cout<<n<<endl;
}

int main(){
     int n;
     cin>>n;
     PrintFromOneToN(n);
    return 0;
}

#include <iostream>
using namespace std;
 
void print_Recursion(int n){
    if(n<=0) return;
    cout<<"I love Recursion"<<endl;
    print_Recursion(n-1);
}
 
int main(){
     int n;
     cin>>n;
     print_Recursion(n);
    return 0;
}
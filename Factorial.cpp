#include <iostream>
#include<string>

using namespace std;

long long Factorial(int n){

if(n<=1) return 1;
return n* Factorial(n-1);//5*4


}

int main(){
    int n;
    cin>>n;
    cout<<Factorial(n);

    return 0;
}

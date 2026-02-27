#include <iostream>
#include<string>

using namespace std;
using ll=long long;

ll Fibonacci(int a,int b,int n){ //0 1

    if(n==1) return a; // 0 1 1 2 3 5 8

   return  Fibonacci(b,a+b,n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<Fibonacci(0,1,n);

    return 0;
}

/*
it depends on assignment of values and call one recursion anther 2

it fast than naive as time complexity = o(n)


*/

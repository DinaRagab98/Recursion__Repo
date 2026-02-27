#include<iostream>
using namespace std;

int Fibonacci(int n){
    if(n==1) return 0;
    if(n==2) return 1;
    return Fibonacci(n-1)+Fibonacci(n-2);
}

int main(){

    int n;
    cin>>n;
    cout<<Fibonacci(n);
}
/*this naive way as it depend on mathmatical standard 
as math rule : fib(n)=fib(n-1)+fib(n-2)
so it implemented this rule in code but this has advantages and disadvatages 
advantages:
     easy to learn and implement math rule
disadvatages:
      very slow as it calculates same values in every iterator 
      => Fib(5)
          ├─ Fib(4)
          │   ├─ Fib(3)
          │   └─ Fib(2)
          └─ Fib(3)   ← calcluated before
     time complexity= o(2^n)

*/
#include <iostream>
#include<vector>

using namespace std;
using ll=long long;

void print_Stars(int n){
  if(n<=0) return;
  cout<<"*";
  print_Stars(n-1);

}
void print_Spaces(int n){
  if(n<=0) return;
 cout<<" ";
 print_Spaces(n-1);

}
void Pyramids(int n,int i=1){
 if(i>n) return;
 print_Spaces(n-i);
 print_Stars(2*i-1);
 cout<<endl;
 Pyramids(n,i+1);

}

int main(){
  int n;
  cin>>n;
  Pyramids(n);
    return 0;
}

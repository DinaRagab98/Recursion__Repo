#include <iostream>
#include<vector>

using namespace std;
using ll=long long;

void Sum_of_Matrix(int r,int c, vector<vector<int>>& A,vector<vector<int>>& B,int i,int j){
   int sum=0;
   if(i==r) return;

   if(j==c){
    cout<<endl;
     Sum_of_Matrix(r,c,A,B,i+1,0); // next row
     return;
   }
   cout<<A[i][j]+B[i][j]<<" ";
   Sum_of_Matrix(r,c,A,B,i,j+1);




}

int main(){
    int r,c;
    cin>>r>>c;
     vector<vector<int>> A(r, vector<int>(c));
     vector<vector<int>> B(r, vector<int>(c));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>A[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>B[i][j];
        }
    }
    Sum_of_Matrix(r,c,A,B,0,0);
    return 0;
}

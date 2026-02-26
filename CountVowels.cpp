#include <iostream>
#include<string>

using namespace std;
int c=0;
int CountVowels(string s,int i){

 if(i==s.length()) return c;
 s[i]= tolower(s[i]);
 if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u') c++;

 return CountVowels(s,i+=1);


}

int main(){
    string s;
    getline(cin,s);


    cout<<CountVowels(s,0);

    return 0;
}

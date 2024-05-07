#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  while(getline(cin,s)){
    map<char,int>M;
    int Max=0;
    for(auto&i:s)if(isalpha(i))M[i]++,Max=max(Max,M[i]);
    for(auto&i:M)if(isalpha(i.first)&&i.second==Max)cout<<i.first;
    cout<<' '<<Max<<endl;
  }
}

#include"bits/stdc++.h"
using namespace std;
string Plus(string a,string b){
  string ans="";
  bool c=0;
  reverse(a.begin(),a.end());
  reverse(b.begin(),b.end());
  for(int i=0;i<a.size();i++){
    ans+=(a[i]-'0'+b[i]-'0'+c)%10+'0';
    c=(a[i]+b[i]-'0'-'0'+c)/10;
  }
  for(int i=a.size();i<b.size();i++){
    ans+=(b[i]-'0'+c)%10+'0';
    c=(b[i]-'0'+c)/10;
  }
  if(c)ans+="1";
  reverse(ans.begin(),ans.end());
  return ans;
}
string fib[5002]={};
void build(int n){
  if(n<2){fib[n]=to_string(n);return;}
  if(fib[n-1]=="")build(n-1);
  if(fib[n-2]=="")build(n-2);
  fib[n]=Plus(fib[n-2],fib[n-1]); 
}
int main(){
  for(auto&i:fib)i="";
  build(5001);
  int n;while(cin>>n){printf("The Fibonacci number for %d is ",n);cout<<fib[n]<<endl;}
}

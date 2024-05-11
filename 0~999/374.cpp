#include<iostream>
using namespace std;
long long b,p,m;
long long qm(long long n){
  if(n<1)return 1%m;
  if(n%2)return ((qm(n/2)*qm(n/2))%m*b)%m;
  return (qm(n/2)*qm(n/2))%m;
}
int main(){
  while(cin>>b>>p>>m)cout<<qm(p)<<endl;
}

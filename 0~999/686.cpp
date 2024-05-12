#include<iostream>
using namespace std;
bool isprime(int n){
  for(int i=2;i*i<=n;i++)if(!(n%i))return 0;
  return 1;
}
int main(){
  int t;
  while(cin>>t&&t){
    int ans=0;
    for(int i=2;i*2<=t;i++)if(isprime(i)&&isprime(t-i))ans++;
    cout<<ans<<endl;
  }
}

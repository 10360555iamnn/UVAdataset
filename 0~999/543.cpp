#include<bits/stdc++.h>
using namespace std;
bool isprime(int x){
  for(int i=2;i*i<=x;i++)
    if(!(x%i))return 0;
  return 1;
}
int main(){
  int t;
  while(cin>>t&&t)
    for(int i=2;i<=t/2;i++)if(isprime(i)&&isprime(t-i)){printf("%d = %d + %d\n",t,i,t-i);break;}
}

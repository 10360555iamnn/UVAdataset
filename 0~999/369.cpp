#include<bits/stdc++.h>
using namespace std;
int main(){
  long long a,n,b;
  while(cin>>a>>n&&a+n){
    b=min(a-n,n);
    long long tmpu=1,tmpd=1,tmpgcd;
    for(int i=1;i<=b;i++){
      tmpu*=(a-i+1);
      tmpd*=i;
      tmpgcd=__gcd(tmpu,tmpd);
      tmpu/=tmpgcd;
      tmpd/=tmpgcd;
    }
    printf("%lld things taken %lld at a time is %lld exactly.\n",a,n,tmpu);
  }
}

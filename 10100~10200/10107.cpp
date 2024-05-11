#include<bits/stdc++.h>
using namespace std; 
int main(){
  long long n,t=0;
  vector<long long>a;
  while(cin>>n){
    a.push_back(n);
    t++;
    for(int i=t-1;i;i--)
      if(a[i]<a[i-1])swap(a[i],a[i-1]);
      else break;
    if(t%2) cout<<a[t/2]<<endl;
    else cout<<(a[t/2-1]+a[t/2])/2<<endl;
  }
}

#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;cin>>t;
  while(t--){
    int n,sum=0,a,b,c;
    cin>>n;
    while(n--){
      cin>>a>>b>>c;
      sum+=a*c;
    }
    cout<<sum<<endl;
  }
}

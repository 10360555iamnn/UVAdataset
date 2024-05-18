#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;cin>>t;
  while(t--){
    string s;cin>>s;
    int n2=0,n16=0,sum2=stoi(s),sum16=0;
    for(int i=s.size()-1,j=1;i>=0;i--,j*=16)sum16+=(s[i]-'0')*j;
    while(sum2||sum16)n2+=sum2%2,sum2/=2,n16+=sum16%2,sum16/=2;
    cout<<n2<<' '<<n16<<endl;
  }
}

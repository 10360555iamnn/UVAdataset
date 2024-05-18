#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,n;cin>>t;
  while(t--){
    cin>>n;
    vector<int>a(n);
    for(auto&i:a)cin>>i;
    sort(a.begin(),a.end());
    int sum=0,mid=n%2?a[n/2]:(a[n/2]+a[n/2-1])/2;
    for(auto&i:a)sum+=abs(mid-i);
    cout<<sum<<endl;
  }
}

#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  while(cin>>t){
    int sum=0,n;
    for(n=0;sum<t;)sum+=++n;
    printf("TERM %d IS ",t);
    if(n%2)cout<<(sum-t)+1<<'/'<<n-sum+t<<endl;
    else cout<<n-sum+t<<'/'<<(sum-t)+1<<endl;
  }
}

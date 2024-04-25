#include<iostream>
using namespace std;
int main(){
  int t,kase=0;
  while(cin>>t&&t){
    int a[t],sum=0,ans=0;
    for(auto&i:a)cin>>i,sum+=i;
    sum/=t;
    for(auto&i:a)ans+=sum-i>0?sum-i:0;
    printf("Set #%d\nThe minimum number of moves is %d.\n\n",++kase,ans);
  }
}

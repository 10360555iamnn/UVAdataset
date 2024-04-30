#include<iostream>
using namespace std;
int main(){
  int t,m;cin>>t;
  while(t--){
    cin>>m;
    int a[m];
    double avg=0,ans=0;
    for(auto&i:a)cin>>i,avg+=i;
    avg/=m;
    for(auto&i:a)ans+=i>avg;
    printf("%.3f%%\n",ans/m*100);
  }
}

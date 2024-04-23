#include<iostream>
using namespace std;
int main(){
  int n;
  while(cin>>n){
    int a[n],sum=0,now=-1,ans=0;
    for(auto&i:a)cin>>i;
    for(int i=0,tmp=0;i<n;i++,tmp=abs(a[i]-a[i-1])){
      if(now!=tmp)sum+=tmp;;
      now=tmp;
      ans+=i;
    }
    cout<<(ans==sum?"Jolly\n":"Not jolly\n");
  }
}

#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  while(cin>>t&&t){
    int a[t][t],x=-1,y=-1,f=0;
    for(auto&i:a)for(auto&j:i)cin>>j;
    for(int i=0;i<t;i++){
      int sum1=0,sum2=0;
      for(int j=0;j<t;j++)
        sum1+=a[i][j],
        sum2+=a[j][i];
      if(sum1%2)x==-1?x=i+1:f=1;
      if(sum2%2)y==-1?y=i+1:f=1;
    }
    if(x+y==-2)cout<<"OK\n";
    else if(f)cout<<"Corrupt\n";
    else printf("Change bit (%d,%d)\n",x,y);
  }
}

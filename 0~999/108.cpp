#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;while(cin>>n){
    int a[n+1][n+1]={},count[n+1][n+1]={};
    for(int i=1;i<=n;i++)
      for(int j=1;j<=n;j++)cin>>a[i][j],count[i][j]=count[i-1][j]+a[i][j];
    int ans=INT_MIN;
    for(int i=1;i<=n;i++){
      for(int j=i;j<=n;j++){
        int sum=0;
        for(int k=1;k<=n;k++){
          sum+=count[j][k]-count[i-1][k];
          ans=max(ans,sum);
          if(sum<0)sum=0;
        }
      }
    }
    cout<<ans<<endl;
  }
}

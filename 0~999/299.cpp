#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;cin>>t;
  while(t--){
    int n,sum=0;
    cin>>n;
    int a[n];
    for(auto&i:a)cin>>i;
    for(int i=0;i<n;i++)for(int j=1;j<n;j++)if(a[j]<a[j-1])swap(a[j],a[j-1]),sum++;
    printf("Optimal train swapping takes %d swaps.\n",sum);
  }
}

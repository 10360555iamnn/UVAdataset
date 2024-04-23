#include<bits/stdc++.h>
using namespace std;
int main(){
  int a[9];
  while(cin>>a[0]){//B G C
    int all=0;
    for(int i=1;i<9;i++)cin>>a[i];
    for(auto&i:a)all+=i;
    int sum[6]={};
    string s[]={"BCG", "BGC", "CBG", "CGB", "GBC", "GCB"};
    for(int i=0;i<6;i++)
      sum[i]=all-a[3*s[i].find('B')+0]-a[3*s[i].find('G')+1]-a[3*s[i].find('C')+2];
    int Min=min_element(sum,sum+6)-sum;
    cout<<s[Min]<<' '<<sum[Min]<<endl; 
  }
}

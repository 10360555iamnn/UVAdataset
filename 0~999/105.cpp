#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int>tab(10005,0),ans;
  int a,b,h,sh=0;
  bool f=0;
  while(cin>>a>>h>>b)for(int i=a;i<b;i++)tab[i]=max(tab[i],h);
  for(int i=1;i<tab.size();i++)
    if(tab[i-1]!=tab[i])
      cout<<(f++?" ":"")<<i<<' '<<tab[i];
  cout<<endl;
}

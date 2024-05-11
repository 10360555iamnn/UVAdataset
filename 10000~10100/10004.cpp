#include<bits/stdc++.h>
using namespace std;
#define f first 
#define s second 
int main(){
  int n,p,x,y;
  while(cin>>n&&n){
    bool f=1;
    cin>>p;
    vector<int>a(n,-1);
    priority_queue<pair<int,int>>tab;
    while(p--){
      cin>>x>>y;
      tab.push({max(x,y),min(x,y)});
    }
    while(tab.size()){
      auto p=tab.top();
      tab.pop();
      if(a[p.f]==-1){
        a[p.f]=1;
        a[p.s]=0;
      }
      else{
        if(a[p.s]==-1)a[p.s]=!a[p.f];
        else if(a[p.f]==a[p.s]){f=0;break;}
      }
    }
    if(f)cout<<"BICOLORABLE.\n";
    else cout<<"NOT BICOLORABLE.\n";
  }
}

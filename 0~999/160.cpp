#include<bits/stdc++.h>
using namespace std;
vector<int>prime;
int s;
void init(){
  int tmp[101]={};
  for(int i=2;i<=100;i++)
    if(!tmp[i]){
      prime.push_back(i);
      for(int j=2;j*i<101;j++)tmp[j*i]=1;
    }
  s=prime.size();
}
int main(){
  init();
  int t;
  while(cin>>t&&t){
    int a[s]={};
    for(int i=2;i<=t;i++){
      int tmp=i;
      for(int j=0;j<s;j++)while(!(tmp%prime[j]))a[j]++,tmp/=prime[j];
    }
    printf("%3d! =",t);
    for(int i=0;i<s;i++){
      if(!a[i])break;
      if(i&&!(i%15))cout<<"\n      ";
      printf("%3d",a[i]);
    }
    cout<<'\n';
  }
}

#include<iostream>
using namespace std;
int ans(int a){
  int tmp=1;
  while(a>1){
    if(a%2)a=a*3+1;
    else a/=2;	
    tmp++;
  }
  return tmp;
}
int main(){
  int a,b;
  while(cin>>a>>b){
    int sum=0;
    for(int i=min(a,b);i<=max(a,b);i++)sum=max(sum,ans(i));
    cout<<a<<' '<<b<<' '<<sum<<endl;
  }
}

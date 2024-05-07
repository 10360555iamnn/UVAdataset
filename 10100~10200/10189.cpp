#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,kase=0;
  while(cin>>a>>b&&a+b){
    map<int,map<int,char>>m1;
    if(kase++)cout<<endl;
    printf("Field #%d:\n",kase);
    for(int i=0;i<a;i++)for(int j=0;j<b;j++)cin>>m1[i][j];
    for(int i=0;i<a;i++,cout<<endl)for(int j=0;j<b;j++)cout<<(m1[i][j]=='*'?"*":to_string((m1[i-1][j-1]=='*')+(m1[i-1][j]=='*')+(m1[i-1][j+1]=='*')+(m1[i][j-1]=='*')+(m1[i][j+1]=='*')+(m1[i+1][j-1]=='*')+(m1[i+1][j]=='*')+(m1[i+1][j+1]=='*')));  
  }
}

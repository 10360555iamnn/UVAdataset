#include<iostream>
using namespace std;
int main(){
  char c;
  bool flag=1;
  while(cin.get(c))
    if(c=='\"')
      if(flag)cout<<"``",flag=0;
      else cout<<"\'\'",flag=1;
    else cout<<c;
}

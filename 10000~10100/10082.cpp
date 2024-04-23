#include<bits/stdc++.h>
using namespace std;
int main(){
  string tab="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
  string s;
  while(getline(cin,s)){
    for(auto&i:s)
      if(tab.find(i)!=-1)cout<<tab[tab.find(i)-1];
      else cout<<i;
    cout<<endl;
  }
}

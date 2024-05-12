#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  while(getline(cin,s)){
    istringstream ss(s);
    bool f=0;
    while(ss>>s)cout<<(f++?" ":"")<<string(s.rbegin(),s.rend());
    cout<<endl;
  }
}

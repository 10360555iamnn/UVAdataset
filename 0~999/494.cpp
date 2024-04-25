#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  while(getline(cin,s)){
    int sum=0,f=1;
    for(auto&i:s)isalpha(i)?f?sum++,f=0:f=0:f=1;
    cout<<sum<<endl;
  }
}

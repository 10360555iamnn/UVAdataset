#include<iostream>
using namespace std;
int main(){
  string s;
  while(cin>>s&&s!="0"){
    long long sum=0,now=2;
    for(int i=s.size()-1;i>=0;i--,now*=2)
      sum+=(s[i]!='0')*(s[i]-'0')*(now-1);
    cout<<sum<<endl;
  }
}

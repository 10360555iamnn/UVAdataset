#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;cin>>t;
  while(t--){
    string  s,rs;
    cin>>s;
    int kase=0;
    rs=s;
    reverse(rs.begin(),rs.end());
    do{
      string tmp="";
      bool c=0;
      for(int i=s.size()-1;i>=0;i--)tmp+=(s[i]-'0'+rs[i]-'0'+c)%10+'0',c=(s[i]-'0'+rs[i]-'0'+c)/10;
      if(c)tmp+='1';
      rs=tmp;
      s=tmp;
      reverse(s.begin(),s.end());
      kase++;
    }while(rs!=s);
    cout<<kase<<' '<<rs<<endl;
  }
}

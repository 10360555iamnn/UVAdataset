#include<bits/stdc++.h>
using namespace std;
int main(){
  int a[256]={};
  string s;
  while(getline(cin,s))for(auto&i:s)if(isalpha(i))a[toupper(i)]++;
  for(int i=*max_element(a+'A',a+'Z');i;i--)
    for(int j='A';j<='Z';j++)if(a[j]==i)cout<<char(j)<<' '<<i<<endl;
}

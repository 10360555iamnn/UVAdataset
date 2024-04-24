#include<iostream>
using namespace std;
int main(){
  long long a,b;
  while(cin>>a>>b&&a+b){
    int sum=0,carry=0;
    while(a||b||carry){
      int ta=a%10,tb=b%10;
      carry+ta+tb>9?sum+=1,carry=1:carry=0;
      a/=10,b/=10;
    }
    if(!sum)cout<<"No carry operation.\n";
    else if(sum==1)cout<<"1 carry operation.\n";
    else cout<<sum<<" carry operations.\n";
  }
}

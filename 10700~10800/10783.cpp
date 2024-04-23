#include<iostream>
using namespace std;
int main(){
  int t,a,b,kase=1;
  cin>>t;
  while(t--){
    cin>>a>>b;
    int sum=0;
    for(int i=a;i<=b;i++)if(i%2)sum+=i;
    printf("Case %d: %d\n",kase++,sum);
  }
}

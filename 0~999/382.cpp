#include<iostream>
using namespace std;
int main(){
  cout<<"PERFECTION OUTPUT\n";
  int n;
  while(cin>>n&&n){
    int sum=0;
    for(int i=1;i<n;i++)if(!(n%i))sum+=i;
    if(sum==n)printf("%5d  PERFECT\n",n);
    else if(sum<n)printf("%5d  DEFICIENT\n",n);
    else printf("%5d  ABUNDANT\n",n);
  }
  cout<<"END OF OUTPUT\n";
}

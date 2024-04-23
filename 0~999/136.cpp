#include<bits/stdc++.h>
using namespace std;
int main(){
  set<long long>t,tab;
  int a[3]={2,3,5};
  t.insert(1);
  while(tab.size()<1500){
    long long n=*t.begin();
    t.erase(*t.begin());
    tab.insert(n);
    if(tab.size()==1500)printf("The 1500'th ugly number is %lld.\n",n);
    for(int i=0;i<3;i++)t.insert(n*a[i]);
  }
}

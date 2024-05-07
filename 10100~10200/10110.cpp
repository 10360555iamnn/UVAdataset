#include<bits/stdc++.h>
using namespace std;
int main(){
  long long t;
  while(cin>>t&&t){
    long long i=sqrt(t);
    cout<<(i*i==t?"yes\n":"no\n");
  }
}

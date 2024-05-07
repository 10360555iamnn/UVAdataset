#include<bits/stdc++.h>
using namespace std;
int main(){
  double h,m;char c;
  while(cin>>h>>c>>m&&h+m){
    h=h*(360/12)+30*(m/60);
    m=m*(360/60);
    m=max(h,m)-min(h,m);
    printf("%.3f\n",m>180?360-m:m);
  }
}

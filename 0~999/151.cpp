#include<iostream>
using namespace std;
int main(){
  int m;
  while(cin>>m&&m){
    for(int i=1;i<m;i++){
      int f=0;
      for(int j=1;j<m;j++)f=(f+i)%j;
      if(f==11){
        cout<<i<<endl;
        break;
      }
    }
  }
}

#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,n,m;cin>>t;
  deque<int>box[t];
  int tab[t];
  for(int i=0;i<t;i++){
    tab[i]=i;
    box[i].push_back(i);
  }
  string s,ss;
  while(cin>>s&&s!="quit"){
    cin>>n>>ss>>m;
    if(s=="move"){
      if(ss=="onto"){
        int now_n=tab[n];//n所在的box位置
        int now_m=tab[m];//m所在的box位置
        if(now_n==now_m)continue;
        while(box[now_n].size()&&box[now_n][box[now_n].size()-1]!=n){//當n所在box的頭不是n時
          int tmp=box[now_n][box[now_n].size()-1];//n所在box的頭
          tab[tmp]=tmp;
          box[tmp].push_back(tmp);
          box[now_n].pop_back();
        }
        now_m=tab[m];//m所在的box位置
        while(box[now_m].size()&&box[now_m][box[now_m].size()-1]!=m){
          int tmp=box[now_m][box[now_m].size()-1];
          tab[tmp]=tmp;
          box[tmp].push_back(tmp);
          box[now_m].pop_back();
        }
        box[now_m].push_back(n);
        box[now_n].pop_back();
        tab[n]=now_m;
      }
      if(ss=="over"){
        int now_n=tab[n];//n所在的box位置
        int now_m=tab[m];
        //if(now_n==now_m)continue;
        while(box[now_n].size()&&box[now_n][box[now_n].size()-1]!=n){
          int tmp=box[now_n][box[now_n].size()-1];
          tab[tmp]=tmp;
          box[box[now_n][box[now_n].size()-1]].push_back(tmp);
          box[now_n].pop_back();
        }
        now_m=tab[m];
        box[now_m].push_back(n);
        box[now_n].pop_back();
        tab[n]=now_m;
      }
    }
    else{
      if(ss=="onto"){
        int now_m=tab[m];//m所在的box位置
        int now_n=tab[n];//n所在的box位置
        if(now_n==now_m)continue;
        while(box[now_m].size()&&box[now_m][box[now_m].size()-1]!=m){
          int tmp=box[now_m][box[now_m].size()-1];
          tab[tmp]=tmp;
          box[tmp].push_back(tmp);
          box[now_m].pop_back();
        }
        deque<int>tmp_box;
        while(box[now_n].size()){
          int tmp=box[now_n][box[now_n].size()-1];
          tab[tmp]=now_m;
          tmp_box.push_front(tmp);
          box[now_n].pop_back();
          if(tmp==n)break;
        }
        while(tmp_box.size()){
          box[now_m].push_back(tmp_box[0]);
          tmp_box.pop_front();
        }
      }
      if(ss=="over"){
        int now_n=tab[n];//n所在的box位置
        int now_m=tab[m];//m所在的box位置
        //if(now_n==now_m)continue;
        deque<int>tmp_box;
        while(box[now_n].size()){
          int tmp=box[now_n][box[now_n].size()-1];
          tab[tmp]=now_m;
          tmp_box.push_front(tmp);
          box[now_n].pop_back();
          if(tmp==n)break;
        }
        //for(auto&i:tmp_box)cout<<i<<' ';
        while(tmp_box.size()){
          box[now_m].push_back(tmp_box[0]);
          tmp_box.pop_front();
        }
      }
    }
  }
  for(int i=0;i<t;i++){
    cout<<i<<":";
    for(auto&j:box[i])cout<<' '<<j;
    cout<<endl;
  }
}

#include<bits/stdc++.h>
using namespace std;  

void rev(vector<int>v,int n){
  for(int i=0;i<sqrt(n);i++){
  v.push_back(i);
    if(n%i==0)v.push_back(n/i);
    if(n/i!=i)v.push_back(n/i);
  }
  sort(v.begin(),v.end());
  for(auto it:v)cout<<it<<" ";
}

    void printNos(int n) {
        int i=1;
        if(n==i)return;
        
        cout<<i;
        printNos(i+1);
    }


int main(){
  int n;
  cin>>n;
cout<<printNos(n);
  return 0;
}

#include<bits/stdc++.h>
using namespace std;

void check(vector<int>arr,int n){
    int f;
    for(int i=0;i<n-1;i++){
        f=1;
        if(arr[i]>arr[i+1]){
            f=0;
            break;
        }
    }
        if(f) cout<<"sorted"<<endl;
        else cout<<"not sorted"<<endl;
    
}



int main(){
    int n;
    cin>>n;
    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    check(arr,n); 
}
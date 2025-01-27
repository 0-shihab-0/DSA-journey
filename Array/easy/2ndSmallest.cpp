#include<bits/stdc++.h>
using namespace std;

int brute(vector<int>arr,int n){
        sort(arr.begin(),arr.end());
        int ssm=-1;

        for(int i=1;i<=n;i++){
            if(arr[i]!=arr[i+1]){
                ssm=arr[i];
                break;
            }
        }
        return ssm;
}

int better(vector<int>arr,int n){
    int mn=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<mn) mn = arr[i];
    }

    int ssm=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<ssm && arr[i]!=mn)
            ssm = arr[i];
    }
    return ssm;
}

int optimal(vector<int>arr,int n){
    int mn=arr[0];
    int ssm=INT_MAX;

    for(int i=0;i<n;i++){
        if(arr[i]<mn){
            ssm=mn;
            mn=arr[i];
        }
        else if(arr[i]>mn && ssm>arr[i])
            ssm=arr[i];
    }
    return ssm;
}


int main(){
    int n;
    cin>>n;
    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<brute(arr,n)<<endl; //TC->(NlogN+N)
    cout<<better(arr,n)<<endl; //TC-> (N+N)
    cout<<optimal(arr,n)<<endl; //TC -> (N)

    

   return 0;
}



#include<bits/stdc++.h>
using namespace std;

int brute(vector<int>arr,int n){
        sort(arr.begin(),arr.end());
        int sl=-1;

        for(int i=n-2;i>=0;i--){
            if(arr[i]!=arr[n-1]){
                sl=arr[i];
                break;
            }
        }
        return sl;
}

int better(vector<int>arr,int n){
    int mx=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>mx) mx = arr[i];
    }

    int sl=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>sl && arr[i]!=mx)
            sl = arr[i];
    }
    return sl;
}

int optimal(vector<int>arr,int n){
    int mx=arr[0];
    int sl=-1;

    for(int i=0;i<n;i++){
        if(arr[i]>mx){
            sl=mx;
            mx=arr[i];
        }
        else if(arr[i]<mx && sl<arr[i])
            sl=arr[i];
    }
    return sl;
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


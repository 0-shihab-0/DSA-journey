#include<bits/stdc++.h>
using namespace std;

void brute(vector<int>& arr,int n,int d){
    int temp[d];

    for(int i=n-d-1;i<n;i++){
        temp[i-(n-d)]=arr[i];
    }
    
    for(int i=d;i<n;i++){
        arr[i]=arr[i-d];
    }
 
    for(int i=0;i<d;i++){
        arr[i]=temp[i];
    }

}

int main(){
    int n,d;
    cin>>n>>d;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

     brute(arr,n,d);

     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}
#include<bits/stdc++.h>
using namespace std;

void onePlace(vector<int>& arr,int n){
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}

void Dplace_brute(vector<int>& arr,int n,int d){
    d%=n;
    int temp[d];

    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }

    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }

    for(int i=n-d;i<n;i++){
        arr[i]=temp[i-(n-d)];
    }


}

void Dplace_optimal(vector<int>& arr,int n,int d){

    d%=n;
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.begin()+d,arr.begin()+n);
    reverse(arr.begin(),arr.begin()+n);

}
int main(){
    int n,d;
    cin>>n>>d;
    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    onePlace(arr,n);
    Dplace_brute(arr,n,d);
    Dplace_optimal(arr,n,d);


    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }



}
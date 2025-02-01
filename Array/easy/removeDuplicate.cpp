#include<bits/stdc++.h>
using namespace std;

int brute(vector<int>& arr,int n){
        set<int>st;

        for(int i=0;i<n;i++){
            st.insert(arr[i]);
        }

        int i=0;
        for(int it:st)
            arr[i++]=it;

        return i;
}


int optimal(vector<int>& arr,int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // int newSize=remove(arr,n);
    int size=brute(arr,n);
      for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}

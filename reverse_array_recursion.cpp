#include <bits/stdc++.h>
using namespace std;

   void opposite(int arr[], int n,int i){
        if(i>=n/2){
            return;
        }
        swap(arr[i],arr[n-1-i]);
       opposite(arr,n,i+1);

        
    }
    void reverse_me(int arr[],int n){
        opposite(arr,n,0);
    }

int main() {
    vector<int> arr;
    int n;
    cin>>n;
    arr.resize(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse_me(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
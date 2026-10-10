#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int count=0;
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                count++;
            }
        }
        if(count==0){
            cout<<"YES"<<endl;
        }
        else if(k==1){
            cout<<"NO"<<endl;
        }
        else if(k>1){
            cout<<"YES"<<endl;
        }
      
    }
    return 0;
}

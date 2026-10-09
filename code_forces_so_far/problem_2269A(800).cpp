#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int p=1;
        for(int i=0;i<n-k+1;i++){
            p=p*2;
        }
        p=p+(k-1)*2;
        cout<<p<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> s(n);
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        string soln;
        for(int i=0;i<n;i++){
            if(s[i]=="1"){
                soln.push_back(i+1);
                continue;
            }
            if(s[i]=="2"){
                if(soln.size()==0)
                continue;
                else{
                    soln.back()=i+1;
                    continue;
                }
            }
            if(s[i]=="3"){
                continue;
            }
        }
            cout<<soln.size()<<endl;
            for(int i=0;i<soln.size();i++){
                cout<<soln[i]<<" ";
            }
            cout<<endl;
        


    }
    return 0;
}
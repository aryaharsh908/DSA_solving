
 #include <bits/stdc++.h>
 using namespace std;
 
 int main() {
     long long int n;
     cin>>n;
     int count = (int)(log10(n)+1);
     int q=n;
     long long int p=0;
     int s=count;
     int r=0;
        while(n>0){
            
            r=n%10;
            long long int num=pow(r,s);
            p+=num;
            n=n/10;
        }
        if(p==q)
        cout<<"true";
        else 
        cout<<"false";
     return 0;
 }
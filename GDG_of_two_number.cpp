/*class Solution {     // my soluton
public:
    int GCD(int n1,int n2) {
        if(n1==n2)
            return n1;
        int p= abs(n1 - n2);
        int q= min(n1,min(n2,p));
        for(int i=q;i>0;i--){
            if(n1%i==0 && n2%i==0)
                return i;
        }

    }
}; */

#include <bits/stdc++.h>  //optimal solution
using namespace std;

int main() {
    int n1,n2;
    cin>>n1>>n2; 
    while (n1>0 && n2>0) {
        if (n1 > n2)
            n1 = n1 % n2;
        else
            n2 = n2 % n1;
    }
    if (n1 == 0)
        cout << n2;
    else
        cout << n1;
      return 0;
}
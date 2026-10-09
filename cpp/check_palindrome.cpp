#include <bits/stdc++.h>
using namespace std;

   bool check(string * s,int q,int i){
    int n=s->size();
        if(q==n) // if there are no alphanumeric then our q never updates it means the string will become empty resulting true
    return true;
        if (i>q/2){  // if the character matches then slowly slowly i will increase and when i recahes greater then the value/2 of the last alphanumeirc index 
            return true;
        }
        if((*s)[i]!=(*s)[q-i]){
            return false;
        }
        return check(s,q,i+1);
    }
    bool isPalindrome(string s) {
        int n=s.length();
        if(n==1)  // single character will always be a plaindrome 
        return true;
        int q=n;
        for(int i=0;i<n;i++)
        {
            if(s[i]>=65 && s[i]<=90)  // converting the uppercases into lowercases 
            {
                s[i]=s[i]+32;
            }
        }
        for(int i=0;i<n;i++){
            int p=s[i];
             if((p<65 && p>57)||(p>90 && p<97)||p>122 || p<48){ // if we found a non alphanumeric then we start to swap with the nearest alphanumeric 
                for(int j=i;j<n-1;j++){
                    int T=s[j+1];
                    if((T<65 && T>57)||(T>90 && T<97))
                        continue;
                        if(T>122 || T<48)
                        continue;
                    else
                    swap(s[i],s[j+1]);
                    break;   
                }
            }
        }
        for(int i=0;i<n;i++){  // after swapping all the non alphanumeric are placed at the end of the string .. so we have to move our q to the position wherwe we have ther last alphanumeric 
            if((s[i]>=97 && s[i]<=122)||(s[i]>=48 && s[i]<=57)){
                q=i;
            }
        }
      return check(&s,q,0);        //recursion call
    }

int main() {
    string s;
    cin>>s;
    cout<<isPalindrome(s);
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

  int str(string s1,string s2) {
        int m=s1.size();
        int n=s2.size();
       
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(s1[i+j]!=s2[j]){
                    break;
                }
            
            if(j==n-1){
                return i;
            }
        }
    }
        return -1;
        
    }
    
int main(){
    string a="sadbutsad",b="sad";
    cout<<str(a,b)<<endl;
}

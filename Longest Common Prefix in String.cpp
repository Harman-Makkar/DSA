#include<bits/stdc++.h>
using namespace std;

//LongestCommonPrefix
string LCP(vector<string>& s) {
    int n=s.size();
    if(n==0){
        return "";
    }

    sort(s.begin(),s.end());

    string a=s[0]; // Compare First
    string b=s[n - 1]; // Last
    string ans="";

    for(int i=0;i<a.size();i++) {
        if(a[i]==b[i]){
            ans=ans+a[i];
        } 
        else{
            break;
        }
    }
    return ans;
}

int main(){
    vector<string> s={"flower","flow","flight"};
    cout<< LCP(s)<<endl;
}

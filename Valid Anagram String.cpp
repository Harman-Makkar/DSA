#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s,string t){
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    
    if(s==t){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    string s="hello";
    string t="oelhl";
    
    cout<<isAnagram(s,t)<<endl;
}

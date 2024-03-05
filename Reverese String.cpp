#include <bits/stdc++.h>
using namespace std;
 
void reverse(string s){
    for(int i=s.size()-1;i>=0;i--){
        cout<<s[i];
    }
}
 
int main(){
    //Case 1
    string s="banana";
    reverse(s);
    
    cout<<endl;
    
    //Case2
    string s1="hlo";
    reverse(s1);
}

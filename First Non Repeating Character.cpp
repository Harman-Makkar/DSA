#include<bits/stdc++.h>
using namespace std;

void first(string s){
    map<char,int> freq;
    
    for(char c:s){
        freq[c]++;
    }
    
    for(char c:s){
        if(freq[c]==1){
            cout<<c<<endl;
            return;
        }
    }
    cout<<"No"<<endl;
}

int main(){
    string s="hhello";
    first(s);
}

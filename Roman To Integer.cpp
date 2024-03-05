#include<bits/stdc++.h>
using namespace std;

int romanToInt(string s) {
        int n=s.size();

        map<char,int>value;
        value['I']=1;
        value['V']=5;
        value['X']=10;
        value['L']=50;
        value['C']=100;
        value['D']=500;
        value['M']=1000;

        int integer=0;

        for(int i=0;i<n;i++){
            if(value[s[i]]>=value[s[i+1]]){
                integer=integer+value[s[i]];
            }
            else{
                integer=integer-value[s[i]];
            }
        }
        return integer;
        
    }

    
int main(){
    string s="LVIII";
    cout<<romanToInt(s)<<endl;
}

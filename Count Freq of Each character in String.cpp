#include<bits/stdc++.h>
using namespace std;

void Freq(string s){
	map<char,int> mp;
	for(int i=0;i<s.size();i++){
		mp[s[i]]++;
	}
// Print characters and their frequencies in same order of their appearance
	for(int i=0;i<s.size();i++) {
// Print only if this character is not printed before
		if(mp[s[i]]!=0){
			cout<<s[i]<<mp[s[i]]<<" ";
			mp[s[i]]=0;
		}
	}
}

int main(){
	string s="Hello";
	Freq(s);
}

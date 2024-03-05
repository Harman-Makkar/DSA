#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
	//Corner Case
	if(n<=1)
		return false;

	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0){
			return false;
		}
        else{
	        return true;
        }
}

int main(){
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}



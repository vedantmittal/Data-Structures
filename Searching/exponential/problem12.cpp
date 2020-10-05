#include<iostream>
using namespace std;

int max(int a,int b){
	if(b==0){
		return 1;
	}	
	if(b%2==0){
		return max(a*a,b/2);
	}
	else{
		return max(a*a,(b-1)/2);
	}
}

int main(){
	int a;
	cin>>a;
	int b;
	cin>>b;
	int val = max(a,b);
	cout<<val;
	return 0;
}
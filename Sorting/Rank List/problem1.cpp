#include<bits/stdc++.h>
using namespace std;

static map<string,int> val;
int count =0;

void parket(string input){
	val[input] = ++count;
	cout<<"CAR PARKED AT POSITION:"<<count;
}

int search(string input){
	if(val[input]!=val.end()){
		cout<<"CAR POSITION:"<<val[input];
	}
	else{
		cout<<"CAR DOES NOT EXISTS";
	}
}



int main(){
	val["MH04CC2"] = ++count;
	val["MH04C2820"] = ++count;
	val["MH04BB3232"] = ++count;
	val["MH04CC2113"] = ++count;val["MH04CC2878"] = ++count;val["MH04BB8"] = ++count;val["MH04CC2888"] = ++count;val["MH04CC1313"] = ++count;val["MH04CC2222"] = ++count;
	val["MH04C1201"] = ++count;
	val["MH04CC555"] = ++count;
	val["MH04C6565"] = ++count;
	val["MH04A7"] = ++count;
	
	int n;
	cin>>n;
	string input;
	if(n==1){
		cin.ignore();
		getline(cin,input);
		parket(input);
	}
	else if(n==2){
		cin.ignore();
		getline(cin,input);
		search(input);
	}
	else{
		cout<<"INVALID INPUT";
	}
	
}
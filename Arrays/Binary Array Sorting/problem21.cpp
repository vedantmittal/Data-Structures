#include <bits/stdc++.h> 
using namespace std; 

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    	cin>>arr[i];
	}
	map<int,int> val;
	map<int,int>::iterator it;
	for(int i=0;i<n;i++){
    	val[arr[i]]++;
	}
	it = val.begin();
	int i=0;
    if(it->second == 0){
        while(it->second>i){
            arr[i] = 0;
            ++i;
        }
    }
	while(i<n){
		arr[i] = 1;
		++i;
	}
	for(int i=0;i<n;i++){
    	cout<<arr[i]<<" ";
	}
    return 0; 
}


#include<iostream>
#include<map>
using namespace std;

int main(){

	int a;
	cin>>a;
	while(a--){
		int arr[10];
	    int value;
	
	    for(int i=0;i<10;i++){
	        cin>>arr[i];
	    }    
	
	    for(int i=0;i<10;i++){
	        if(arr[i] ==  arr[i+1]){
	        	value =arr[i];
	        	break;
			}
	    }
	    
	    cout<<value<<endl;
	}
    
    
}
#include<iostream>
using namespace std;

int main(){

	int a;
	cin>>a;
	while(a--){
		int a[10];
	    int value;
	
	    for(int i=0;i<10;i++){
	        cin>>a[i];
	    }    
	
	    if(a[3]==a[4]){
	        cout<<a[3];
	    }else{
	        cout<<a[5];
	    }
	    cout<<endl;
	}
    
    
}
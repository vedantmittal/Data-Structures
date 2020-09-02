#include<iostream>
using namespace std;



int main(){
	
	int a,b,c,d;
	cin>>a;
	while(a--){
		cin>>b;
		int arr[b];
		for(int i=0;i<b;i++){
			cin>>arr[i];
		}
		c = arr[b-1];
		for(int i=b-2;i>=0;i++){
			if(arr[i]>=c){
				c = arr[i];
			}
			else{
				arr[i] = -1;
			}
		} 
		for (int i=0;i<b;i++){
			if(arr[i]!= -1){
				cout<<arr[i]<<" ";
			}
		}
	}
	
}

#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	
	int a,n,d,i,temp,val;
	cin>>a;
	while(a--){
		cin>>n;
		cin>>d;
		int arr[n],arrn[n];
		val=0;
		for(i=0;i<n;i++){
			cin>>arr[i];
		}
		for(i=d;i<n;i++,val++){
			arrn[val] = arr[i];
			
		}
		for(i=0;i<d;i++,val++){
			arrn[val] = arr[i];
		}
		for(i=0;i<val;i++){
			cout<<arrn[i];
		}
		
	}
	
}

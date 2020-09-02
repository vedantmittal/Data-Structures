#include<iostream>
using namespace std;

int main(){
	int a,n,i,j,temp=0;
	cin>>a;
	while(a--){
		cin>>n;
		int a[n],a1[n];
		for(i=1;i<=n;i++){
			cin>>a[i];
		}
		for(i=1;i<=n;i++){
			temp = a[i];
			a1[temp] = i;
		}
		for(i=1;i<=n;i++){
			cout<<a1[i]<<" ";
		}
		cout<<endl;
	}
}

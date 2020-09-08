#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    while (a--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int val=0;
        for(int i=0;i<n;i++){
        	for(int j=i+1;j<n;j++){
        		if(abs(arr[j] - arr[i])>1){
        			val += arr[j] - arr[i];
				}
			}
		}
		cout<<val;
        cout<<endl;
    }
}
#include <iostream>
using namespace std;

int main() {
    int a;
    cin>>a;
    while(a--){
        int n;
        cin>>n;
        int arr[n],a[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int k;
        cin>>k;
        for(int i=0;i<=n-k;i++){
            int temp=0,val=0;
            while(val<k){
                if(arr[i+val]<0){
                    cout<<arr[i+val]<<" ";
                    break;
                }
                ++val;
            }
            if(temp>=0){
                cout<<0<<" ";
            } 
        }
        cout<<endl;
    }
	return 0;
}
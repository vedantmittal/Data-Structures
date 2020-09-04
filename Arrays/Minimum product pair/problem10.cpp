#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int a;
    cin>>a;
    while(a--){
        int n;
        cin>>n;
        int arr[n];
        long long x,y;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        x = arr[0];
        y = arr[1];
        cout<<x*y<<endl;
    }
	//code
	return 0;
}
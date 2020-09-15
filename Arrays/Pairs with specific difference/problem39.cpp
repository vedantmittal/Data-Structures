#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int a;
    cin>>a;
    while(a--){
        int n,k;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cin>>k;
        sort(arr,arr+n);
        int sum = 0;
        for(int i=n-1;i>0;i--){
            if(arr[i]>=0){
                int temp;
                for(int j = i-1;j>=0;j--){
                    temp = arr[i] - arr[j];
                    if(temp< k){
                        sum = sum + arr[i] + arr[j];
                        arr[j] = -1;
                        arr[i] = -1;
                        break;
                    }
                }

            }
        }
        cout<<sum<<endl;
    }
}